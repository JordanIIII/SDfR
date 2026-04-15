// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from relbot_msgs:msg/RelbotMotors.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "relbot_msgs/msg/detail/relbot_motors__struct.h"
#include "relbot_msgs/msg/detail/relbot_motors__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool relbot_msgs__msg__relbot_motors__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[44];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("relbot_msgs.msg._relbot_motors.RelbotMotors", full_classname_dest, 43) == 0);
  }
  relbot_msgs__msg__RelbotMotors * ros_message = _ros_message;
  {  // left_wheel_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "left_wheel_vel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->left_wheel_vel = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // right_wheel_vel
    PyObject * field = PyObject_GetAttrString(_pymsg, "right_wheel_vel");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->right_wheel_vel = PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * relbot_msgs__msg__relbot_motors__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of RelbotMotors */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("relbot_msgs.msg._relbot_motors");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "RelbotMotors");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  relbot_msgs__msg__RelbotMotors * ros_message = (relbot_msgs__msg__RelbotMotors *)raw_ros_message;
  {  // left_wheel_vel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->left_wheel_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "left_wheel_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // right_wheel_vel
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->right_wheel_vel);
    {
      int rc = PyObject_SetAttrString(_pymessage, "right_wheel_vel", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
