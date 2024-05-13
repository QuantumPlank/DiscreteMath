
logic_operators_test = executable('logic_operators',
  sources: [
    logic_operators_src,
    'test_logic-operators.c'
  ],
  include_directories: [ inc_dirs ],
  dependencies: [ unity_dependency ]
)

test('logic_operators', logic_operators_test)

bitstrings_test = executable('bitstrings',
  sources: [
    bitstrings_src,
    'test_bitstrings.c'
  ],
  include_directories: [ inc_dirs ],
  dependencies: [ unity_dependency ]
)

test('bitstrings', bitstrings_test)