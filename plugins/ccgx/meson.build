cargs = ['-DG_LOG_DOMAIN="FuPluginCcgx"']

install_data([
  'ccgx-ids.quirk',
  'ccgx.quirk',
  ],
  install_dir: join_paths(datadir, 'fwupd', 'quirks.d')
)

shared_module('fu_plugin_ccgx',
  fu_hash,
  sources : [
    'fu-plugin-ccgx.c',
    'fu-ccgx-common.c',
    'fu-ccgx-firmware.c',
    'fu-ccgx-hid-device.c',
    'fu-ccgx-hpi-device.c',
  ],
  include_directories : [
    root_incdir,
    fwupd_incdir,
    fwupdplugin_incdir,
  ],
  install : true,
  install_dir: plugin_dir,
  link_with : [
    fwupd,
    fwupdplugin,
  ],
  c_args : cargs,
  dependencies : [
    plugin_deps,
    gudev,
  ],
)
