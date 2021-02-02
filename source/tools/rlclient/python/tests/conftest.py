import pytest
import subprocess
from os import path
import os
import zero_ad

PYRO_BINARY = os.environ.get('PYROGENESIS_BIN', 'pyrogenesis')
scriptdir = path.dirname(path.realpath(__file__))
with open(path.join(scriptdir, '..', 'samples', 'arcadia.json'), 'r') as f:
    config = f.read()

@pytest.fixture(scope='session')
def game():
    proc = subprocess.Popen(
        [
            PYRO_BINARY,
            '--rl-interface=127.0.0.1:4783',
            '--autostart-nonvisual'
        ],
        stdout=subprocess.PIPE
    )
    line = proc.stdout.readline()
    while 'RL interface listening' not in line.decode():
        line = proc.stdout.readline()
    game = zero_ad.ZeroAD('http://localhost:4783')
    yield game
    proc.terminate()

@pytest.fixture(scope='function')
def arcadia(game):
    game.reset(config)
    yield game
