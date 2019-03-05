/* Generated code for Python module 'Crypto.Cipher'
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

/* The "_module_Crypto$Cipher" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Crypto$Cipher;
PyDictObject *moduledict_Crypto$Cipher;

/* The declarations of module constants used, if any. */
static PyObject *const_str_plain_XOR;
extern PyObject *const_str_digest_3094a3153522c449dea0453cbf4eb75a;
static PyObject *const_str_plain_PKCS1_v1_5;
static PyObject *const_str_digest_d2e3dba4dd824614061d27533deb12f3;
static PyObject *const_str_plain_DES3;
static PyObject *const_str_plain_PKCS1_OAEP;
static PyObject *const_list_e889549949473b09ac4baa160fb43540_list;
extern PyObject *const_str_digest_10c675d39d154a59cf6207a839b0661f;
static PyObject *const_str_plain_Blowfish;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___revision__;
static PyObject *const_str_plain_CAST;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_97b43dad6d8fe32dd92958d810f9ff65;
static PyObject *const_str_plain_ARC4;
static PyObject *const_str_plain_ARC2;
static PyObject *const_str_digest_b2e9cda21bb4007f347b4f25a187541a;
extern PyObject *const_str_plain___path__;
static PyObject *const_str_plain_DES;
extern PyObject *const_str_plain_AES;
static PyObject *const_list_str_digest_97b43dad6d8fe32dd92958d810f9ff65_list;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_XOR = UNSTREAM_STRING( &constant_bin[ 3445 ], 3, 1 );
    const_str_plain_PKCS1_v1_5 = UNSTREAM_STRING( &constant_bin[ 3448 ], 10, 1 );
    const_str_digest_d2e3dba4dd824614061d27533deb12f3 = UNSTREAM_STRING( &constant_bin[ 3458 ], 2271, 0 );
    const_str_plain_DES3 = UNSTREAM_STRING( &constant_bin[ 4729 ], 4, 1 );
    const_str_plain_PKCS1_OAEP = UNSTREAM_STRING( &constant_bin[ 5500 ], 10, 1 );
    const_list_e889549949473b09ac4baa160fb43540_list = PyList_New( 10 );
    PyList_SET_ITEM( const_list_e889549949473b09ac4baa160fb43540_list, 0, const_str_plain_AES ); Py_INCREF( const_str_plain_AES );
    const_str_plain_ARC2 = UNSTREAM_STRING( &constant_bin[ 4322 ], 4, 1 );
    PyList_SET_ITEM( const_list_e889549949473b09ac4baa160fb43540_list, 1, const_str_plain_ARC2 ); Py_INCREF( const_str_plain_ARC2 );
    const_str_plain_ARC4 = UNSTREAM_STRING( &constant_bin[ 2908 ], 4, 1 );
    PyList_SET_ITEM( const_list_e889549949473b09ac4baa160fb43540_list, 2, const_str_plain_ARC4 ); Py_INCREF( const_str_plain_ARC4 );
    const_str_plain_Blowfish = UNSTREAM_STRING( &constant_bin[ 4422 ], 8, 1 );
    PyList_SET_ITEM( const_list_e889549949473b09ac4baa160fb43540_list, 3, const_str_plain_Blowfish ); Py_INCREF( const_str_plain_Blowfish );
    const_str_plain_CAST = UNSTREAM_STRING( &constant_bin[ 4469 ], 4, 1 );
    PyList_SET_ITEM( const_list_e889549949473b09ac4baa160fb43540_list, 4, const_str_plain_CAST ); Py_INCREF( const_str_plain_CAST );
    const_str_plain_DES = UNSTREAM_STRING( &constant_bin[ 2903 ], 3, 1 );
    PyList_SET_ITEM( const_list_e889549949473b09ac4baa160fb43540_list, 5, const_str_plain_DES ); Py_INCREF( const_str_plain_DES );
    PyList_SET_ITEM( const_list_e889549949473b09ac4baa160fb43540_list, 6, const_str_plain_DES3 ); Py_INCREF( const_str_plain_DES3 );
    PyList_SET_ITEM( const_list_e889549949473b09ac4baa160fb43540_list, 7, const_str_plain_XOR ); Py_INCREF( const_str_plain_XOR );
    PyList_SET_ITEM( const_list_e889549949473b09ac4baa160fb43540_list, 8, const_str_plain_PKCS1_v1_5 ); Py_INCREF( const_str_plain_PKCS1_v1_5 );
    PyList_SET_ITEM( const_list_e889549949473b09ac4baa160fb43540_list, 9, const_str_plain_PKCS1_OAEP ); Py_INCREF( const_str_plain_PKCS1_OAEP );
    const_str_digest_97b43dad6d8fe32dd92958d810f9ff65 = UNSTREAM_STRING( &constant_bin[ 5729 ], 46, 0 );
    const_str_digest_b2e9cda21bb4007f347b4f25a187541a = UNSTREAM_STRING( &constant_bin[ 5775 ], 58, 0 );
    const_list_str_digest_97b43dad6d8fe32dd92958d810f9ff65_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_97b43dad6d8fe32dd92958d810f9ff65_list, 0, const_str_digest_97b43dad6d8fe32dd92958d810f9ff65 ); Py_INCREF( const_str_digest_97b43dad6d8fe32dd92958d810f9ff65 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Crypto$Cipher( void )
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
static struct PyModuleDef mdef_Crypto$Cipher =
{
    PyModuleDef_HEAD_INIT,
    "Crypto.Cipher",
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

MOD_INIT_DECL( Crypto$Cipher )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Crypto$Cipher );
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
    puts("Crypto.Cipher: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Crypto.Cipher: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Crypto.Cipher: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initCrypto$Cipher" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Crypto$Cipher = Py_InitModule4(
        "Crypto.Cipher",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_Crypto$Cipher = PyModule_Create( &mdef_Crypto$Cipher );
#endif

    moduledict_Crypto$Cipher = MODULE_DICT( module_Crypto$Cipher );

    // Set __compiled__ to what it we know.
    UPDATE_STRING_DICT1(
        moduledict_Crypto$Cipher,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 1
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_Crypto$Cipher,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_Crypto$Cipher,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_Crypto$Cipher,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_Crypto$Cipher );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_3094a3153522c449dea0453cbf4eb75a, module_Crypto$Cipher );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Crypto$Cipher, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_Crypto$Cipher, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_Crypto$Cipher, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher, (Nuitka_StringObject *)const_str_plain___name__ ),
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
#if 1
        SET_ATTRIBUTE( spec_value, const_str_plain_submodule_search_locations, PyList_New(0) );
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_Crypto$Cipher, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any


    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_d2e3dba4dd824614061d27533deb12f3;
        UPDATE_STRING_DICT0( moduledict_Crypto$Cipher, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_b2e9cda21bb4007f347b4f25a187541a;
        UPDATE_STRING_DICT0( moduledict_Crypto$Cipher, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = LIST_COPY( const_list_str_digest_97b43dad6d8fe32dd92958d810f9ff65_list );
        UPDATE_STRING_DICT1( moduledict_Crypto$Cipher, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = LIST_COPY( const_list_e889549949473b09ac4baa160fb43540_list );
        UPDATE_STRING_DICT1( moduledict_Crypto$Cipher, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = const_str_digest_10c675d39d154a59cf6207a839b0661f;
        UPDATE_STRING_DICT0( moduledict_Crypto$Cipher, (Nuitka_StringObject *)const_str_plain___revision__, tmp_assign_source_5 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 1 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_Crypto$Cipher, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_Crypto$Cipher );
}
