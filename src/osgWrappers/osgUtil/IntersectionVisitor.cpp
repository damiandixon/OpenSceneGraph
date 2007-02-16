// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/Billboard>
#include <osg/Camera>
#include <osg/Drawable>
#include <osg/Geode>
#include <osg/Group>
#include <osg/LOD>
#include <osg/Matrix>
#include <osg/Node>
#include <osg/PagedLOD>
#include <osg/Projection>
#include <osg/Transform>
#include <osg/Viewport>
#include <osgUtil/IntersectionVisitor>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgUtil::IntersectionVisitor)
	I_BaseType(osg::NodeVisitor);
	I_ConstructorWithDefaults2(IN, osgUtil::Intersector *, intersector, 0, IN, osgUtil::IntersectionVisitor::ReadCallback *, readCallback, 0,
	                           ____IntersectionVisitor__Intersector_P1__ReadCallback_P1,
	                           "",
	                           "");
	I_Method0(void, reset,
	          Properties::VIRTUAL,
	          __void__reset,
	          "Method to call to reset visitor. ",
	          "Useful if your visitor accumulates state during a traversal, and you plan to reuse the visitor. To flush that state for the next traversal: call reset() prior to each traversal. ");
	I_Method1(void, setIntersector, IN, osgUtil::Intersector *, intersector,
	          Properties::NON_VIRTUAL,
	          __void__setIntersector__Intersector_P1,
	          "Set the intersector that will be used to intersect with the scene, and to store any hits that occur. ",
	          "");
	I_Method0(osgUtil::Intersector *, getIntersector,
	          Properties::NON_VIRTUAL,
	          __Intersector_P1__getIntersector,
	          "Get the intersector that will be used to intersect with the scene, and to store any hits that occur. ",
	          "");
	I_Method0(const osgUtil::Intersector *, getIntersector,
	          Properties::NON_VIRTUAL,
	          __C5_Intersector_P1__getIntersector,
	          "Get the const intersector that will be used to intersect with the scene, and to store any hits that occur. ",
	          "");
	I_Method1(void, setReadCallback, IN, osgUtil::IntersectionVisitor::ReadCallback *, rc,
	          Properties::NON_VIRTUAL,
	          __void__setReadCallback__ReadCallback_P1,
	          "Set the read callback. ",
	          "");
	I_Method0(osgUtil::IntersectionVisitor::ReadCallback *, getReadCallback,
	          Properties::NON_VIRTUAL,
	          __ReadCallback_P1__getReadCallback,
	          "Get the read callback. ",
	          "");
	I_Method0(const osgUtil::IntersectionVisitor::ReadCallback *, getReadCallback,
	          Properties::NON_VIRTUAL,
	          __C5_ReadCallback_P1__getReadCallback,
	          "Get the const read callback. ",
	          "");
	I_Method1(void, pushWindowMatrix, IN, osg::RefMatrix *, matrix,
	          Properties::NON_VIRTUAL,
	          __void__pushWindowMatrix__osg_RefMatrix_P1,
	          "",
	          "");
	I_Method1(void, pushWindowMatrix, IN, osg::Viewport *, viewport,
	          Properties::NON_VIRTUAL,
	          __void__pushWindowMatrix__osg_Viewport_P1,
	          "",
	          "");
	I_Method0(void, popWindowMatrix,
	          Properties::NON_VIRTUAL,
	          __void__popWindowMatrix,
	          "",
	          "");
	I_Method0(osg::RefMatrix *, getWindowMatrix,
	          Properties::NON_VIRTUAL,
	          __osg_RefMatrix_P1__getWindowMatrix,
	          "",
	          "");
	I_Method1(void, pushProjectionMatrix, IN, osg::RefMatrix *, matrix,
	          Properties::NON_VIRTUAL,
	          __void__pushProjectionMatrix__osg_RefMatrix_P1,
	          "",
	          "");
	I_Method0(void, popProjectionMatrix,
	          Properties::NON_VIRTUAL,
	          __void__popProjectionMatrix,
	          "",
	          "");
	I_Method0(osg::RefMatrix *, getProjectionMatrix,
	          Properties::NON_VIRTUAL,
	          __osg_RefMatrix_P1__getProjectionMatrix,
	          "",
	          "");
	I_Method1(void, pushViewMatrix, IN, osg::RefMatrix *, matrix,
	          Properties::NON_VIRTUAL,
	          __void__pushViewMatrix__osg_RefMatrix_P1,
	          "",
	          "");
	I_Method0(void, popViewMatrix,
	          Properties::NON_VIRTUAL,
	          __void__popViewMatrix,
	          "",
	          "");
	I_Method0(osg::RefMatrix *, getViewMatrix,
	          Properties::NON_VIRTUAL,
	          __osg_RefMatrix_P1__getViewMatrix,
	          "",
	          "");
	I_Method1(void, pushModelMatrix, IN, osg::RefMatrix *, matrix,
	          Properties::NON_VIRTUAL,
	          __void__pushModelMatrix__osg_RefMatrix_P1,
	          "",
	          "");
	I_Method0(void, popModelMatrix,
	          Properties::NON_VIRTUAL,
	          __void__popModelMatrix,
	          "",
	          "");
	I_Method0(osg::RefMatrix *, getModelMatrix,
	          Properties::NON_VIRTUAL,
	          __osg_RefMatrix_P1__getModelMatrix,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Node &, node,
	          Properties::VIRTUAL,
	          __void__apply__osg_Node_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Geode &, geode,
	          Properties::VIRTUAL,
	          __void__apply__osg_Geode_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Billboard &, geode,
	          Properties::VIRTUAL,
	          __void__apply__osg_Billboard_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Group &, group,
	          Properties::VIRTUAL,
	          __void__apply__osg_Group_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::LOD &, lod,
	          Properties::VIRTUAL,
	          __void__apply__osg_LOD_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::PagedLOD &, lod,
	          Properties::VIRTUAL,
	          __void__apply__osg_PagedLOD_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Transform &, transform,
	          Properties::VIRTUAL,
	          __void__apply__osg_Transform_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Projection &, projection,
	          Properties::VIRTUAL,
	          __void__apply__osg_Projection_R1,
	          "",
	          "");
	I_Method1(void, apply, IN, osg::Camera &, camera,
	          Properties::VIRTUAL,
	          __void__apply__osg_Camera_R1,
	          "",
	          "");
	I_SimpleProperty(osgUtil::Intersector *, Intersector, 
	                 __Intersector_P1__getIntersector, 
	                 __void__setIntersector__Intersector_P1);
	I_SimpleProperty(osg::RefMatrix *, ModelMatrix, 
	                 __osg_RefMatrix_P1__getModelMatrix, 
	                 0);
	I_SimpleProperty(osg::RefMatrix *, ProjectionMatrix, 
	                 __osg_RefMatrix_P1__getProjectionMatrix, 
	                 0);
	I_SimpleProperty(osgUtil::IntersectionVisitor::ReadCallback *, ReadCallback, 
	                 __ReadCallback_P1__getReadCallback, 
	                 __void__setReadCallback__ReadCallback_P1);
	I_SimpleProperty(osg::RefMatrix *, ViewMatrix, 
	                 __osg_RefMatrix_P1__getViewMatrix, 
	                 0);
	I_SimpleProperty(osg::RefMatrix *, WindowMatrix, 
	                 __osg_RefMatrix_P1__getWindowMatrix, 
	                 0);
END_REFLECTOR

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osgUtil::IntersectionVisitor::ReadCallback)
	I_BaseType(osg::Referenced);
	I_Constructor0(____ReadCallback,
	               "",
	               "");
	I_Method1(osg::Node *, readNodeFile, IN, const std::string &, filename,
	          Properties::PURE_VIRTUAL,
	          __osg_Node_P1__readNodeFile__C5_std_string_R1,
	          "",
	          "");
END_REFLECTOR

BEGIN_ENUM_REFLECTOR(osgUtil::Intersector::CoordinateFrame)
	I_EnumLabel(osgUtil::Intersector::WINDOW);
	I_EnumLabel(osgUtil::Intersector::PROJECTION);
	I_EnumLabel(osgUtil::Intersector::VIEW);
	I_EnumLabel(osgUtil::Intersector::MODEL);
END_REFLECTOR

BEGIN_ABSTRACT_OBJECT_REFLECTOR(osgUtil::Intersector)
	I_BaseType(osg::Referenced);
	I_ConstructorWithDefaults1(IN, osgUtil::Intersector::CoordinateFrame, cf, osgUtil::Intersector::MODEL,
	                           Properties::NON_EXPLICIT,
	                           ____Intersector__CoordinateFrame,
	                           "",
	                           "");
	I_Method1(void, setCoordinateFrame, IN, osgUtil::Intersector::CoordinateFrame, cf,
	          Properties::NON_VIRTUAL,
	          __void__setCoordinateFrame__CoordinateFrame,
	          "",
	          "");
	I_Method0(osgUtil::Intersector::CoordinateFrame, getCoordinateFrame,
	          Properties::NON_VIRTUAL,
	          __CoordinateFrame__getCoordinateFrame,
	          "",
	          "");
	I_Method1(osgUtil::Intersector *, clone, IN, osgUtil::IntersectionVisitor &, iv,
	          Properties::PURE_VIRTUAL,
	          __Intersector_P1__clone__osgUtil_IntersectionVisitor_R1,
	          "",
	          "");
	I_Method1(bool, enter, IN, const osg::Node &, node,
	          Properties::PURE_VIRTUAL,
	          __bool__enter__C5_osg_Node_R1,
	          "",
	          "");
	I_Method0(void, leave,
	          Properties::PURE_VIRTUAL,
	          __void__leave,
	          "",
	          "");
	I_Method2(void, intersect, IN, osgUtil::IntersectionVisitor &, iv, IN, osg::Drawable *, drawable,
	          Properties::PURE_VIRTUAL,
	          __void__intersect__osgUtil_IntersectionVisitor_R1__osg_Drawable_P1,
	          "",
	          "");
	I_Method0(void, reset,
	          Properties::VIRTUAL,
	          __void__reset,
	          "",
	          "");
	I_Method0(bool, containsIntersections,
	          Properties::PURE_VIRTUAL,
	          __bool__containsIntersections,
	          "",
	          "");
	I_Method0(bool, disabled,
	          Properties::NON_VIRTUAL,
	          __bool__disabled,
	          "",
	          "");
	I_Method0(void, incrementDisabledCount,
	          Properties::NON_VIRTUAL,
	          __void__incrementDisabledCount,
	          "",
	          "");
	I_Method0(void, decrementDisabledCount,
	          Properties::NON_VIRTUAL,
	          __void__decrementDisabledCount,
	          "",
	          "");
	I_SimpleProperty(osgUtil::Intersector::CoordinateFrame, CoordinateFrame, 
	                 __CoordinateFrame__getCoordinateFrame, 
	                 __void__setCoordinateFrame__CoordinateFrame);
END_REFLECTOR

TYPE_NAME_ALIAS(std::vector< osg::ref_ptr< osgUtil::Intersector > >, osgUtil::IntersectorGroup::Intersectors);

BEGIN_OBJECT_REFLECTOR(osgUtil::IntersectorGroup)
	I_BaseType(osgUtil::Intersector);
	I_Constructor0(____IntersectorGroup,
	               "",
	               "");
	I_Method1(void, addIntersector, IN, osgUtil::Intersector *, intersector,
	          Properties::NON_VIRTUAL,
	          __void__addIntersector__Intersector_P1,
	          "Add an Intersector. ",
	          "");
	I_Method0(osgUtil::IntersectorGroup::Intersectors &, getIntersectors,
	          Properties::NON_VIRTUAL,
	          __Intersectors_R1__getIntersectors,
	          "Get the list of intersector. ",
	          "");
	I_Method0(void, clear,
	          Properties::NON_VIRTUAL,
	          __void__clear,
	          "Clear the list of intersectors. ",
	          "");
	I_Method1(osgUtil::Intersector *, clone, IN, osgUtil::IntersectionVisitor &, iv,
	          Properties::VIRTUAL,
	          __Intersector_P1__clone__osgUtil_IntersectionVisitor_R1,
	          "",
	          "");
	I_Method1(bool, enter, IN, const osg::Node &, node,
	          Properties::VIRTUAL,
	          __bool__enter__C5_osg_Node_R1,
	          "",
	          "");
	I_Method0(void, leave,
	          Properties::VIRTUAL,
	          __void__leave,
	          "",
	          "");
	I_Method2(void, intersect, IN, osgUtil::IntersectionVisitor &, iv, IN, osg::Drawable *, drawable,
	          Properties::VIRTUAL,
	          __void__intersect__osgUtil_IntersectionVisitor_R1__osg_Drawable_P1,
	          "",
	          "");
	I_Method0(void, reset,
	          Properties::VIRTUAL,
	          __void__reset,
	          "",
	          "");
	I_Method0(bool, containsIntersections,
	          Properties::VIRTUAL,
	          __bool__containsIntersections,
	          "",
	          "");
	I_SimpleProperty(osgUtil::IntersectorGroup::Intersectors &, Intersectors, 
	                 __Intersectors_R1__getIntersectors, 
	                 0);
END_REFLECTOR

BEGIN_VALUE_REFLECTOR(osg::ref_ptr< osgUtil::Intersector >)
	I_Constructor0(____ref_ptr,
	               "",
	               "");
	I_Constructor1(IN, osgUtil::Intersector *, ptr,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__T_P1,
	               "",
	               "");
	I_Constructor1(IN, const osg::ref_ptr< osgUtil::Intersector > &, rp,
	               Properties::NON_EXPLICIT,
	               ____ref_ptr__C5_ref_ptr_R1,
	               "",
	               "");
	I_Method0(osgUtil::Intersector *, get,
	          Properties::NON_VIRTUAL,
	          __T_P1__get,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method0(osgUtil::Intersector *, release,
	          Properties::NON_VIRTUAL,
	          __T_P1__release,
	          "",
	          "");
	I_Method1(void, swap, IN, osg::ref_ptr< osgUtil::Intersector > &, rp,
	          Properties::NON_VIRTUAL,
	          __void__swap__ref_ptr_R1,
	          "",
	          "");
	I_SimpleProperty(osgUtil::Intersector *, , 
	                 __T_P1__get, 
	                 0);
END_REFLECTOR

STD_VECTOR_REFLECTOR(std::vector< osg::ref_ptr< osgUtil::Intersector > >);

