import zero_ad
import json
import math
from os import path

game = zero_ad.ZeroAD('http://localhost:6000')
scriptdir = path.dirname(path.realpath(__file__))
with open(path.join(scriptdir, '..', 'samples', 'arcadia.json'), 'r') as f:
    config = f.read()

with open(path.join(scriptdir, '..', 'samples', 'enable-fastactions.js'), 'r') as f:
    fastactions = f.read()

def dist (p1, p2):
    return math.sqrt(sum((math.pow(x2 - x1, 2) for (x1, x2) in zip(p1, p2))))

def center(units):
    sum_position = map(sum, zip(*map(lambda u: u.position(), units)))
    return [x/len(units) for x in sum_position]

def closest(units, position):
    dists = (dist(unit.position(), position) for unit in units)
    index = 0
    min_dist = next(dists)
    for (i, d) in enumerate(dists):
        if d < min_dist:
            index = i
            min_dist = d

    return units[index]

def test_fastactions():
    state = game.reset(config)
    game.evaluate(fastactions)
    female_citizens = state.units(owner=1, type='female_citizen')
    house_tpl = 'structures/spart_house'
    house_count = len(state.units(owner=1, type=house_tpl))
    x = 680
    z = 640
    build_house = zero_ad.actions.construct(female_citizens, house_tpl, x, z, autocontinue=True)
    # Check that they start building the house
    state = game.step([build_house])
    step_count = 0
    while len(state.units(owner=1, type=house_tpl)) == house_count:
        step_count += 1
        state = game.step()
    print('steps:', step_count)
    # TODO: add an assert
