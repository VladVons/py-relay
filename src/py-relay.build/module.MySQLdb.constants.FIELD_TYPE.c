/* Generated code for Python module 'MySQLdb.constants.FIELD_TYPE'
 * created by Nuitka version 0.6.2
 *
 * This code is in part copyright 2019 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The "_module_MySQLdb$constants$FIELD_TYPE" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_MySQLdb$constants$FIELD_TYPE;
PyDictObject *moduledict_MySQLdb$constants$FIELD_TYPE;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_DATETIME;
extern PyObject *const_str_plain_NEWDECIMAL;
extern PyObject *const_str_plain_STRING;
extern PyObject *const_str_plain_YEAR;
static PyObject *const_int_pos_254;
extern PyObject *const_str_plain_SET;
extern PyObject *const_str_plain_ENUM;
static PyObject *const_int_pos_250;
static PyObject *const_int_pos_253;
extern PyObject *const_str_plain_DATE;
extern PyObject *const_int_pos_16;
extern PyObject *const_str_plain_TIME;
static PyObject *const_str_plain_CHAR;
extern PyObject *const_int_pos_10;
extern PyObject *const_int_pos_11;
static PyObject *const_int_pos_12;
static PyObject *const_int_pos_13;
static PyObject *const_int_pos_15;
static PyObject *const_str_digest_9124bc7ba4bedbbc9a30104330875946;
extern PyObject *const_str_plain_MEDIUM_BLOB;
static PyObject *const_int_pos_255;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_SHORT;
static PyObject *const_str_plain_GEOMETRY;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_NULL;
static PyObject *const_int_pos_251;
static PyObject *const_str_digest_5a41cdcdf41915c0a0be2eb7e7d55ea1;
extern PyObject *const_str_plain_TINY_BLOB;
static PyObject *const_int_pos_248;
static PyObject *const_int_pos_249;
static PyObject *const_int_pos_246;
static PyObject *const_str_digest_00bff40bb0c2639fdfeb6b90323cb80a;
static PyObject *const_int_pos_245;
extern PyObject *const_str_plain_LONG_BLOB;
extern PyObject *const_str_plain_LONGLONG;
extern PyObject *const_str_plain_TIMESTAMP;
extern PyObject *const_int_pos_7;
extern PyObject *const_int_pos_4;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_DOUBLE;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_FLOAT;
static PyObject *const_int_pos_252;
extern PyObject *const_int_pos_8;
static PyObject *const_int_pos_9;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain_BLOB;
extern PyObject *const_str_plain_TINY;
extern PyObject *const_str_plain_DECIMAL;
extern PyObject *const_str_plain_INT24;
extern PyObject *const_str_plain_VAR_STRING;
static PyObject *const_str_plain_INTERVAL;
extern PyObject *const_str_plain_JSON;
extern PyObject *const_str_plain_VARCHAR;
static PyObject *const_str_plain_BIT;
extern PyObject *const_str_plain_LONG;
static PyObject *const_int_pos_247;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_int_pos_254 = PyInt_FromLong( 254l );
    const_int_pos_250 = PyInt_FromLong( 250l );
    const_int_pos_253 = PyInt_FromLong( 253l );
    const_str_plain_CHAR = UNSTREAM_STRING( &constant_bin[ 16583 ], 4, 1 );
    const_int_pos_12 = PyInt_FromLong( 12l );
    const_int_pos_13 = PyInt_FromLong( 13l );
    const_int_pos_15 = PyInt_FromLong( 15l );
    const_str_digest_9124bc7ba4bedbbc9a30104330875946 = UNSTREAM_STRING( &constant_bin[ 32232 ], 91, 0 );
    const_int_pos_255 = PyInt_FromLong( 255l );
    const_str_plain_GEOMETRY = UNSTREAM_STRING( &constant_bin[ 32323 ], 8, 1 );
    const_int_pos_251 = PyInt_FromLong( 251l );
    const_str_digest_5a41cdcdf41915c0a0be2eb7e7d55ea1 = UNSTREAM_STRING( &constant_bin[ 32331 ], 28, 0 );
    const_int_pos_248 = PyInt_FromLong( 248l );
    const_int_pos_249 = PyInt_FromLong( 249l );
    const_int_pos_246 = PyInt_FromLong( 246l );
    const_str_digest_00bff40bb0c2639fdfeb6b90323cb80a = UNSTREAM_STRING( &constant_bin[ 32359 ], 116, 0 );
    const_int_pos_245 = PyInt_FromLong( 245l );
    const_int_pos_252 = PyInt_FromLong( 252l );
    const_int_pos_9 = PyInt_FromLong( 9l );
    const_str_plain_INTERVAL = UNSTREAM_STRING( &constant_bin[ 32475 ], 8, 1 );
    const_str_plain_BIT = UNSTREAM_STRING( &constant_bin[ 32483 ], 3, 1 );
    const_int_pos_247 = PyInt_FromLong( 247l );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_MySQLdb$constants$FIELD_TYPE( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.


static void createModuleCodeObjects(void)
{

}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_MySQLdb$constants$FIELD_TYPE =
{
    PyModuleDef_HEAD_INIT,
    "MySQLdb.constants.FIELD_TYPE",
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

extern PyObject *const_str_plain___compiled__;

extern PyObject *const_str_plain___package__;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;
extern PyObject *const_str_plain___loader__;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain__initializing;
extern PyObject *const_str_plain_submodule_search_locations;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

extern PyTypeObject Nuitka_Loader_Type;

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( MySQLdb$constants$FIELD_TYPE )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_MySQLdb$constants$FIELD_TYPE );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    puts("MySQLdb.constants.FIELD_TYPE: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("MySQLdb.constants.FIELD_TYPE: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("MySQLdb.constants.FIELD_TYPE: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initMySQLdb$constants$FIELD_TYPE" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_MySQLdb$constants$FIELD_TYPE = Py_InitModule4(
        "MySQLdb.constants.FIELD_TYPE",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_MySQLdb$constants$FIELD_TYPE = PyModule_Create( &mdef_MySQLdb$constants$FIELD_TYPE );
#endif

    moduledict_MySQLdb$constants$FIELD_TYPE = MODULE_DICT( module_MySQLdb$constants$FIELD_TYPE );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_MySQLdb$constants$FIELD_TYPE,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_MySQLdb$constants$FIELD_TYPE,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_MySQLdb$constants$FIELD_TYPE,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_MySQLdb$constants$FIELD_TYPE,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_MySQLdb$constants$FIELD_TYPE );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_5a41cdcdf41915c0a0be2eb7e7d55ea1, module_MySQLdb$constants$FIELD_TYPE );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain___name__ ),
            (PyObject *)&Nuitka_Loader_Type
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );
        Py_DECREF( module_spec_class );

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT( spec_value );

// For packages set the submodule search locations as well, even if to empty
// list, so investigating code will consider it a package.
#if 0
        SET_ATTRIBUTE( spec_value, const_str_plain_submodule_search_locations, PyList_New(0) );
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_00bff40bb0c2639fdfeb6b90323cb80a;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_9124bc7ba4bedbbc9a30104330875946;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = const_int_0;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_DECIMAL, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = const_int_pos_1;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_TINY, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = const_int_pos_2;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_SHORT, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = const_int_pos_3;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_LONG, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = const_int_pos_4;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_FLOAT, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = const_int_pos_5;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_DOUBLE, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = const_int_pos_6;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_NULL, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = const_int_pos_7;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_TIMESTAMP, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = const_int_pos_8;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_LONGLONG, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = const_int_pos_9;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_INT24, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = const_int_pos_10;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_DATE, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = const_int_pos_11;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_TIME, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = const_int_pos_12;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_DATETIME, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = const_int_pos_13;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_YEAR, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = const_int_pos_15;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_VARCHAR, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = const_int_pos_16;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_BIT, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = const_int_pos_245;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_JSON, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = const_int_pos_246;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_NEWDECIMAL, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = const_int_pos_247;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_ENUM, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = const_int_pos_248;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_SET, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = const_int_pos_249;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_TINY_BLOB, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = const_int_pos_250;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_MEDIUM_BLOB, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = const_int_pos_251;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_LONG_BLOB, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = const_int_pos_252;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_BLOB, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = const_int_pos_253;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_VAR_STRING, tmp_assign_source_27 );
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = const_int_pos_254;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_STRING, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = const_int_pos_255;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_GEOMETRY, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_TINY );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TINY );
        }

        CHECK_OBJECT( tmp_mvar_value_1 );
        tmp_assign_source_30 = tmp_mvar_value_1;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_CHAR, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_ENUM );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ENUM );
        }

        CHECK_OBJECT( tmp_mvar_value_2 );
        tmp_assign_source_31 = tmp_mvar_value_2;
        UPDATE_STRING_DICT0( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain_INTERVAL, tmp_assign_source_31 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_MySQLdb$constants$FIELD_TYPE, (Nuitka_StringObject *)const_str_plain___path__ );

        if (path_value && PyList_CheckExact(path_value) && PyList_Size(path_value) > 0)
        {
            PyObject *path_element = PyList_GetItem( path_value, 0 );

            PyObject *path_importer_cache = PySys_GetObject((char *)"path_importer_cache");
            CHECK_OBJECT( path_importer_cache );

            int res = PyDict_SetItem( path_importer_cache, path_element, (PyObject *)&Nuitka_Loader_Type );
            assert( res == 0 );
        }
    }
#endif
#endif

    return MOD_RETURN_VALUE( module_MySQLdb$constants$FIELD_TYPE );
}
