project('Discrete Math', 'c')

unity_subproject = subproject('unity')
unity_dependency = unity_subproject.get_variable('unity_dep')


inc_dirs = include_directories('include')

subdir('src')
subdir('test')

executable('dm', [dm_src, logic_operators_src],
    include_directories: inc_dirs 
)



