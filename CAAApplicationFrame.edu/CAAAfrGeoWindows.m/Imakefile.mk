# COPYRIGHT DASSAULT SYSTEMES 2000
#======================================================================
# Imakefile for module CAAAfrGeoWindows.m
#======================================================================
#
# SHARED LIBRARY
#
BUILT_OBJECT_TYPE = SHARED LIBRARY

LINK_WITH= CATApplicationFrame    \
            CATVisualization CATViz      \
            CAAVisGeoModelInt      \
            JS0FM JS0GROUP DI0PANV2
