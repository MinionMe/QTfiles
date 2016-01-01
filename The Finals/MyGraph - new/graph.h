#ifndef GRAPH
#define GRAPH
#include "node.h"
#include "edge.h"
#include <iostream>
#include <vector>
#include <fstream>
#include <map>
#include "stdafx.h"
#include <QString>
#include <vtk-6.2/vtkSmartPointer.h>
#include <vtk-6.2/vtkMutableUndirectedGraph.h>
#include <vtk-6.2/vtkCircularLayoutStrategy.h>
#include <vtk-6.2/vtkDataSetAttributes.h>
#include <vtk-6.2/vtkDoubleArray.h>
#include <vtk-6.2/vtkGraphLayoutView.h>
#include <vtk-6.2/vtkGraphLayout.h>
#include <vtk-6.2/vtkIntArray.h>
#include <vtk-6.2/vtkMutableUndirectedGraph.h>
#include <vtk-6.2/vtkRenderWindowInteractor.h>
#include <vtk-6.2/vtkPoints.h>
class Graph
{
public:
	Graph(){};
    virtual void loadData(QString str) = 0;
};

#endif // GRAPH