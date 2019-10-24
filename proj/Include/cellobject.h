/* Cell object interface */
#ifndef Py_LIMITED_API
#ifndef Py_CELLOBJECT_H
#define Py_CELLOBJECT_H
#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
<<<<<<< HEAD
    PyObject_HEAD
    PyObject *ob_ref;       /* Content of the cell or NULL when empty */
=======
	PyObject_HEAD
	PyObject *ob_ref;	/* Content of the cell or NULL when empty */
>>>>>>> 73921da00deaf52c46c591e7cf1f6c7e6f6daa65
} PyCellObject;

PyAPI_DATA(PyTypeObject) PyCell_Type;

#define PyCell_Check(op) (Py_TYPE(op) == &PyCell_Type)

PyAPI_FUNC(PyObject *) PyCell_New(PyObject *);
PyAPI_FUNC(PyObject *) PyCell_Get(PyObject *);
PyAPI_FUNC(int) PyCell_Set(PyObject *, PyObject *);

#define PyCell_GET(op) (((PyCellObject *)(op))->ob_ref)
#define PyCell_SET(op, v) (((PyCellObject *)(op))->ob_ref = v)

#ifdef __cplusplus
}
#endif
#endif /* !Py_TUPLEOBJECT_H */
#endif /* Py_LIMITED_API */
