# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: RLAPI.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='RLAPI.proto',
  package='',
  syntax='proto3',
  serialized_options=None,
  serialized_pb=_b('\n\x0bRLAPI.proto\"#\n\x07\x41\x63tions\x12\x18\n\x07\x61\x63tions\x18\x01 \x03(\x0b\x32\x07.Action\"\x19\n\x06\x41\x63tion\x12\x0f\n\x07\x63ontent\x18\x01 \x01(\t\"\x1e\n\x0bObservation\x12\x0f\n\x07\x63ontent\x18\x01 \x01(\t\"1\n\x0cResetRequest\x12!\n\x08scenario\x18\x01 \x01(\x0b\x32\x0f.ScenarioConfig\"3\n\x0e\x43onnectRequest\x12!\n\x08scenario\x18\x01 \x01(\x0b\x32\x0f.ScenarioConfig\"8\n\x08\x41IPlayer\x12\n\n\x02id\x18\x01 \x01(\x05\x12\x0c\n\x04type\x18\x02 \x01(\t\x12\x12\n\ndifficulty\x18\x03 \x01(\r\"\xd3\x01\n\x0eScenarioConfig\x12\x0c\n\x04type\x18\x01 \x01(\t\x12\x0c\n\x04name\x18\x02 \x01(\t\x12\x10\n\x08username\x18\x03 \x01(\t\x12\x10\n\x08playerID\x18\x04 \x01(\x05\x12\x0c\n\x04size\x18\x05 \x01(\r\x12\x12\n\nnumPlayers\x18\x06 \x01(\r\x12\x0c\n\x04seed\x18\x07 \x01(\r\x12\x0e\n\x06\x61iseed\x18\x08 \x01(\r\x12\x11\n\tgameSpeed\x18\t \x01(\x02\x12\x1a\n\x07players\x18\n \x03(\x0b\x32\t.AIPlayer\x12\x12\n\nsaveReplay\x18\x0b \x01(\x08\x32}\n\x05RLAPI\x12 \n\x04Step\x12\x08.Actions\x1a\x0c.Observation\"\x00\x12&\n\x05Reset\x12\r.ResetRequest\x1a\x0c.Observation\"\x00\x12*\n\x07\x43onnect\x12\x0f.ConnectRequest\x1a\x0c.Observation\"\x00\x62\x06proto3')
)




_ACTIONS = _descriptor.Descriptor(
  name='Actions',
  full_name='Actions',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='actions', full_name='Actions.actions', index=0,
      number=1, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=15,
  serialized_end=50,
)


_ACTION = _descriptor.Descriptor(
  name='Action',
  full_name='Action',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='content', full_name='Action.content', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=52,
  serialized_end=77,
)


_OBSERVATION = _descriptor.Descriptor(
  name='Observation',
  full_name='Observation',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='content', full_name='Observation.content', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=79,
  serialized_end=109,
)


_RESETREQUEST = _descriptor.Descriptor(
  name='ResetRequest',
  full_name='ResetRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='scenario', full_name='ResetRequest.scenario', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=111,
  serialized_end=160,
)


_CONNECTREQUEST = _descriptor.Descriptor(
  name='ConnectRequest',
  full_name='ConnectRequest',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='scenario', full_name='ConnectRequest.scenario', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=162,
  serialized_end=213,
)


_AIPLAYER = _descriptor.Descriptor(
  name='AIPlayer',
  full_name='AIPlayer',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='id', full_name='AIPlayer.id', index=0,
      number=1, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='type', full_name='AIPlayer.type', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='difficulty', full_name='AIPlayer.difficulty', index=2,
      number=3, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=215,
  serialized_end=271,
)


_SCENARIOCONFIG = _descriptor.Descriptor(
  name='ScenarioConfig',
  full_name='ScenarioConfig',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='type', full_name='ScenarioConfig.type', index=0,
      number=1, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='name', full_name='ScenarioConfig.name', index=1,
      number=2, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='username', full_name='ScenarioConfig.username', index=2,
      number=3, type=9, cpp_type=9, label=1,
      has_default_value=False, default_value=_b("").decode('utf-8'),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='playerID', full_name='ScenarioConfig.playerID', index=3,
      number=4, type=5, cpp_type=1, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='size', full_name='ScenarioConfig.size', index=4,
      number=5, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='numPlayers', full_name='ScenarioConfig.numPlayers', index=5,
      number=6, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='seed', full_name='ScenarioConfig.seed', index=6,
      number=7, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='aiseed', full_name='ScenarioConfig.aiseed', index=7,
      number=8, type=13, cpp_type=3, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='gameSpeed', full_name='ScenarioConfig.gameSpeed', index=8,
      number=9, type=2, cpp_type=6, label=1,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='players', full_name='ScenarioConfig.players', index=9,
      number=10, type=11, cpp_type=10, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
    _descriptor.FieldDescriptor(
      name='saveReplay', full_name='ScenarioConfig.saveReplay', index=10,
      number=11, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      serialized_options=None, file=DESCRIPTOR),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  serialized_options=None,
  is_extendable=False,
  syntax='proto3',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=274,
  serialized_end=485,
)

_ACTIONS.fields_by_name['actions'].message_type = _ACTION
_RESETREQUEST.fields_by_name['scenario'].message_type = _SCENARIOCONFIG
_CONNECTREQUEST.fields_by_name['scenario'].message_type = _SCENARIOCONFIG
_SCENARIOCONFIG.fields_by_name['players'].message_type = _AIPLAYER
DESCRIPTOR.message_types_by_name['Actions'] = _ACTIONS
DESCRIPTOR.message_types_by_name['Action'] = _ACTION
DESCRIPTOR.message_types_by_name['Observation'] = _OBSERVATION
DESCRIPTOR.message_types_by_name['ResetRequest'] = _RESETREQUEST
DESCRIPTOR.message_types_by_name['ConnectRequest'] = _CONNECTREQUEST
DESCRIPTOR.message_types_by_name['AIPlayer'] = _AIPLAYER
DESCRIPTOR.message_types_by_name['ScenarioConfig'] = _SCENARIOCONFIG
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

Actions = _reflection.GeneratedProtocolMessageType('Actions', (_message.Message,), dict(
  DESCRIPTOR = _ACTIONS,
  __module__ = 'RLAPI_pb2'
  # @@protoc_insertion_point(class_scope:Actions)
  ))
_sym_db.RegisterMessage(Actions)

Action = _reflection.GeneratedProtocolMessageType('Action', (_message.Message,), dict(
  DESCRIPTOR = _ACTION,
  __module__ = 'RLAPI_pb2'
  # @@protoc_insertion_point(class_scope:Action)
  ))
_sym_db.RegisterMessage(Action)

Observation = _reflection.GeneratedProtocolMessageType('Observation', (_message.Message,), dict(
  DESCRIPTOR = _OBSERVATION,
  __module__ = 'RLAPI_pb2'
  # @@protoc_insertion_point(class_scope:Observation)
  ))
_sym_db.RegisterMessage(Observation)

ResetRequest = _reflection.GeneratedProtocolMessageType('ResetRequest', (_message.Message,), dict(
  DESCRIPTOR = _RESETREQUEST,
  __module__ = 'RLAPI_pb2'
  # @@protoc_insertion_point(class_scope:ResetRequest)
  ))
_sym_db.RegisterMessage(ResetRequest)

ConnectRequest = _reflection.GeneratedProtocolMessageType('ConnectRequest', (_message.Message,), dict(
  DESCRIPTOR = _CONNECTREQUEST,
  __module__ = 'RLAPI_pb2'
  # @@protoc_insertion_point(class_scope:ConnectRequest)
  ))
_sym_db.RegisterMessage(ConnectRequest)

AIPlayer = _reflection.GeneratedProtocolMessageType('AIPlayer', (_message.Message,), dict(
  DESCRIPTOR = _AIPLAYER,
  __module__ = 'RLAPI_pb2'
  # @@protoc_insertion_point(class_scope:AIPlayer)
  ))
_sym_db.RegisterMessage(AIPlayer)

ScenarioConfig = _reflection.GeneratedProtocolMessageType('ScenarioConfig', (_message.Message,), dict(
  DESCRIPTOR = _SCENARIOCONFIG,
  __module__ = 'RLAPI_pb2'
  # @@protoc_insertion_point(class_scope:ScenarioConfig)
  ))
_sym_db.RegisterMessage(ScenarioConfig)



_RLAPI = _descriptor.ServiceDescriptor(
  name='RLAPI',
  full_name='RLAPI',
  file=DESCRIPTOR,
  index=0,
  serialized_options=None,
  serialized_start=487,
  serialized_end=612,
  methods=[
  _descriptor.MethodDescriptor(
    name='Step',
    full_name='RLAPI.Step',
    index=0,
    containing_service=None,
    input_type=_ACTIONS,
    output_type=_OBSERVATION,
    serialized_options=None,
  ),
  _descriptor.MethodDescriptor(
    name='Reset',
    full_name='RLAPI.Reset',
    index=1,
    containing_service=None,
    input_type=_RESETREQUEST,
    output_type=_OBSERVATION,
    serialized_options=None,
  ),
  _descriptor.MethodDescriptor(
    name='Connect',
    full_name='RLAPI.Connect',
    index=2,
    containing_service=None,
    input_type=_CONNECTREQUEST,
    output_type=_OBSERVATION,
    serialized_options=None,
  ),
])
_sym_db.RegisterServiceDescriptor(_RLAPI)

DESCRIPTOR.services_by_name['RLAPI'] = _RLAPI

# @@protoc_insertion_point(module_scope)
