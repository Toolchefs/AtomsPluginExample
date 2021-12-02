# Atoms example plugin
Atoms example plugin

# Compile

AtomsMaya:
```
cmake -DATOMS_MAYA_FOLDER=/opt/Toolchefs/AtomsMaya -DMAYA_MAJOR_VERSION=2020 -DCMAKE_INSTALL_PREFIX=./out . 
make install 
```

AtomsHoudini
```
cmake -DATOMS_HOUDINI_FOLDER=/opt/Toolchefs/AtomsHoudini/18.5.633 -DCMAKE_INSTALL_PREFIX=./out . 
make install 
```

# Installation

AtomsMaya:

Copy the AtomsPluginExample.so lib to /opt/Toolchefs/AtomsMaya/plugins/2020

Set the env variable:
```
ATOMS_PLUGINS_PATH=/opt/Toolchefs/AtomsMaya/plugins/2020
```

AtomsHoudini:

Copy the AtomsPluginExample.so lib to /opt/Toolchefs/AtomsHoudini/18.5.633/plugins

Set the env variable:
```
ATOMS_PLUGINS_PATH=/opt/Toolchefs/AtomsHoudini/18.5.633/plugins
```
