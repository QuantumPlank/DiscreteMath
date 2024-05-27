project('Discrete Math', 'c',
        default_options: ['c_std=c11'])

unity_subproject = subproject('unity')
unity_dependency = unity_subproject.get_variable('unity_dep')


inc_dirs = include_directories('src')

subdir('src')
subdir('test')

executable('dm', dm_src,
    include_directories: inc_dirs 
)

compiler = meson.get_compiler('c')


