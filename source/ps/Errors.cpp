// Auto-generated by errorlist.pl - do not edit.

#include "precompiled.h"

#include "Errors.h"

class PSERROR_CVFSFile : public PSERROR { protected: PSERROR_CVFSFile(const char* msg); };
class PSERROR_Deserialize : public PSERROR { protected: PSERROR_Deserialize(const char* msg); };
class PSERROR_DllLoader : public PSERROR { protected: PSERROR_DllLoader(const char* msg); };
class PSERROR_Error : public PSERROR { protected: PSERROR_Error(const char* msg); };
class PSERROR_File : public PSERROR { protected: PSERROR_File(const char* msg); };
class PSERROR_GUI : public PSERROR { protected: PSERROR_GUI(const char* msg); };
class PSERROR_Game : public PSERROR { protected: PSERROR_Game(const char* msg); };
class PSERROR_Scripting : public PSERROR { protected: PSERROR_Scripting(const char* msg); };
class PSERROR_Serialize : public PSERROR { protected: PSERROR_Serialize(const char* msg); };
class PSERROR_System : public PSERROR { protected: PSERROR_System(const char* msg); };
class PSERROR_Xeromyces : public PSERROR { protected: PSERROR_Xeromyces(const char* msg); };

class PSERROR_Game_World : public PSERROR_Game { protected: PSERROR_Game_World(const char* msg); };
class PSERROR_Scripting_DefineType : public PSERROR_Scripting { protected: PSERROR_Scripting_DefineType(const char* msg); };
class PSERROR_Scripting_LoadFile : public PSERROR_Scripting { protected: PSERROR_Scripting_LoadFile(const char* msg); };

class PSERROR_CVFSFile_AlreadyLoaded : public PSERROR_CVFSFile { public: PSERROR_CVFSFile_AlreadyLoaded(); PSERROR_CVFSFile_AlreadyLoaded(const char* msg); PSRETURN getCode() const; };
class PSERROR_CVFSFile_LoadFailed : public PSERROR_CVFSFile { public: PSERROR_CVFSFile_LoadFailed(); PSERROR_CVFSFile_LoadFailed(const char* msg); PSRETURN getCode() const; };
class PSERROR_Deserialize_InvalidCharInString : public PSERROR_Deserialize { public: PSERROR_Deserialize_InvalidCharInString(); PSERROR_Deserialize_InvalidCharInString(const char* msg); PSRETURN getCode() const; };
class PSERROR_Deserialize_OutOfBounds : public PSERROR_Deserialize { public: PSERROR_Deserialize_OutOfBounds(); PSERROR_Deserialize_OutOfBounds(const char* msg); PSRETURN getCode() const; };
class PSERROR_Deserialize_ReadFailed : public PSERROR_Deserialize { public: PSERROR_Deserialize_ReadFailed(); PSERROR_Deserialize_ReadFailed(const char* msg); PSRETURN getCode() const; };
class PSERROR_Deserialize_ScriptError : public PSERROR_Deserialize { public: PSERROR_Deserialize_ScriptError(); PSERROR_Deserialize_ScriptError(const char* msg); PSRETURN getCode() const; };
class PSERROR_DllLoader_DllNotLoaded : public PSERROR_DllLoader { public: PSERROR_DllLoader_DllNotLoaded(); PSERROR_DllLoader_DllNotLoaded(const char* msg); PSRETURN getCode() const; };
class PSERROR_DllLoader_SymbolNotFound : public PSERROR_DllLoader { public: PSERROR_DllLoader_SymbolNotFound(); PSERROR_DllLoader_SymbolNotFound(const char* msg); PSRETURN getCode() const; };
class PSERROR_Error_InvalidError : public PSERROR_Error { public: PSERROR_Error_InvalidError(); PSERROR_Error_InvalidError(const char* msg); PSRETURN getCode() const; };
class PSERROR_File_InvalidType : public PSERROR_File { public: PSERROR_File_InvalidType(); PSERROR_File_InvalidType(const char* msg); PSRETURN getCode() const; };
class PSERROR_File_InvalidVersion : public PSERROR_File { public: PSERROR_File_InvalidVersion(); PSERROR_File_InvalidVersion(const char* msg); PSRETURN getCode() const; };
class PSERROR_File_OpenFailed : public PSERROR_File { public: PSERROR_File_OpenFailed(); PSERROR_File_OpenFailed(const char* msg); PSRETURN getCode() const; };
class PSERROR_File_ReadFailed : public PSERROR_File { public: PSERROR_File_ReadFailed(); PSERROR_File_ReadFailed(const char* msg); PSRETURN getCode() const; };
class PSERROR_File_UnexpectedEOF : public PSERROR_File { public: PSERROR_File_UnexpectedEOF(); PSERROR_File_UnexpectedEOF(const char* msg); PSRETURN getCode() const; };
class PSERROR_File_WriteFailed : public PSERROR_File { public: PSERROR_File_WriteFailed(); PSERROR_File_WriteFailed(const char* msg); PSRETURN getCode() const; };
class PSERROR_GUI_InvalidSetting : public PSERROR_GUI { public: PSERROR_GUI_InvalidSetting(); PSERROR_GUI_InvalidSetting(const char* msg); PSRETURN getCode() const; };
class PSERROR_GUI_JSOpenFailed : public PSERROR_GUI { public: PSERROR_GUI_JSOpenFailed(); PSERROR_GUI_JSOpenFailed(const char* msg); PSRETURN getCode() const; };
class PSERROR_GUI_NameAmbiguity : public PSERROR_GUI { public: PSERROR_GUI_NameAmbiguity(); PSERROR_GUI_NameAmbiguity(const char* msg); PSRETURN getCode() const; };
class PSERROR_GUI_NullObjectProvided : public PSERROR_GUI { public: PSERROR_GUI_NullObjectProvided(); PSERROR_GUI_NullObjectProvided(const char* msg); PSRETURN getCode() const; };
class PSERROR_GUI_ObjectNeedsName : public PSERROR_GUI { public: PSERROR_GUI_ObjectNeedsName(); PSERROR_GUI_ObjectNeedsName(const char* msg); PSRETURN getCode() const; };
class PSERROR_GUI_OperationNeedsGUIObject : public PSERROR_GUI { public: PSERROR_GUI_OperationNeedsGUIObject(); PSERROR_GUI_OperationNeedsGUIObject(const char* msg); PSRETURN getCode() const; };
class PSERROR_GUI_UnableToParse : public PSERROR_GUI { public: PSERROR_GUI_UnableToParse(); PSERROR_GUI_UnableToParse(const char* msg); PSRETURN getCode() const; };
class PSERROR_Game_World_MapLoadFailed : public PSERROR_Game_World { public: PSERROR_Game_World_MapLoadFailed(); PSERROR_Game_World_MapLoadFailed(const char* msg); PSRETURN getCode() const; };
class PSERROR_Scripting_CallFunctionFailed : public PSERROR_Scripting { public: PSERROR_Scripting_CallFunctionFailed(); PSERROR_Scripting_CallFunctionFailed(const char* msg); PSRETURN getCode() const; };
class PSERROR_Scripting_ConversionFailed : public PSERROR_Scripting { public: PSERROR_Scripting_ConversionFailed(); PSERROR_Scripting_ConversionFailed(const char* msg); PSRETURN getCode() const; };
class PSERROR_Scripting_CreateObjectFailed : public PSERROR_Scripting { public: PSERROR_Scripting_CreateObjectFailed(); PSERROR_Scripting_CreateObjectFailed(const char* msg); PSRETURN getCode() const; };
class PSERROR_Scripting_DefineConstantFailed : public PSERROR_Scripting { public: PSERROR_Scripting_DefineConstantFailed(); PSERROR_Scripting_DefineConstantFailed(const char* msg); PSRETURN getCode() const; };
class PSERROR_Scripting_DefineType_AlreadyExists : public PSERROR_Scripting_DefineType { public: PSERROR_Scripting_DefineType_AlreadyExists(); PSERROR_Scripting_DefineType_AlreadyExists(const char* msg); PSRETURN getCode() const; };
class PSERROR_Scripting_DefineType_CreationFailed : public PSERROR_Scripting_DefineType { public: PSERROR_Scripting_DefineType_CreationFailed(); PSERROR_Scripting_DefineType_CreationFailed(const char* msg); PSRETURN getCode() const; };
class PSERROR_Scripting_LoadFile_EvalErrors : public PSERROR_Scripting_LoadFile { public: PSERROR_Scripting_LoadFile_EvalErrors(); PSERROR_Scripting_LoadFile_EvalErrors(const char* msg); PSRETURN getCode() const; };
class PSERROR_Scripting_LoadFile_OpenFailed : public PSERROR_Scripting_LoadFile { public: PSERROR_Scripting_LoadFile_OpenFailed(); PSERROR_Scripting_LoadFile_OpenFailed(const char* msg); PSRETURN getCode() const; };
class PSERROR_Scripting_RegisterFunctionFailed : public PSERROR_Scripting { public: PSERROR_Scripting_RegisterFunctionFailed(); PSERROR_Scripting_RegisterFunctionFailed(const char* msg); PSRETURN getCode() const; };
class PSERROR_Scripting_SetupFailed : public PSERROR_Scripting { public: PSERROR_Scripting_SetupFailed(); PSERROR_Scripting_SetupFailed(const char* msg); PSRETURN getCode() const; };
class PSERROR_Scripting_TypeDoesNotExist : public PSERROR_Scripting { public: PSERROR_Scripting_TypeDoesNotExist(); PSERROR_Scripting_TypeDoesNotExist(const char* msg); PSRETURN getCode() const; };
class PSERROR_Serialize_InvalidCharInString : public PSERROR_Serialize { public: PSERROR_Serialize_InvalidCharInString(); PSERROR_Serialize_InvalidCharInString(const char* msg); PSRETURN getCode() const; };
class PSERROR_Serialize_InvalidScriptValue : public PSERROR_Serialize { public: PSERROR_Serialize_InvalidScriptValue(); PSERROR_Serialize_InvalidScriptValue(const char* msg); PSRETURN getCode() const; };
class PSERROR_Serialize_OutOfBounds : public PSERROR_Serialize { public: PSERROR_Serialize_OutOfBounds(); PSERROR_Serialize_OutOfBounds(const char* msg); PSRETURN getCode() const; };
class PSERROR_Serialize_ScriptError : public PSERROR_Serialize { public: PSERROR_Serialize_ScriptError(); PSERROR_Serialize_ScriptError(const char* msg); PSRETURN getCode() const; };
class PSERROR_System_RequiredExtensionsMissing : public PSERROR_System { public: PSERROR_System_RequiredExtensionsMissing(); PSERROR_System_RequiredExtensionsMissing(const char* msg); PSRETURN getCode() const; };
class PSERROR_System_SDLInitFailed : public PSERROR_System { public: PSERROR_System_SDLInitFailed(); PSERROR_System_SDLInitFailed(const char* msg); PSRETURN getCode() const; };
class PSERROR_System_VmodeFailed : public PSERROR_System { public: PSERROR_System_VmodeFailed(); PSERROR_System_VmodeFailed(const char* msg); PSRETURN getCode() const; };
class PSERROR_Xeromyces_XMLOpenFailed : public PSERROR_Xeromyces { public: PSERROR_Xeromyces_XMLOpenFailed(); PSERROR_Xeromyces_XMLOpenFailed(const char* msg); PSRETURN getCode() const; };
class PSERROR_Xeromyces_XMLParseError : public PSERROR_Xeromyces { public: PSERROR_Xeromyces_XMLParseError(); PSERROR_Xeromyces_XMLParseError(const char* msg); PSRETURN getCode() const; };

extern const PSRETURN PSRETURN_CVFSFile_AlreadyLoaded = 0x01000001;
extern const PSRETURN PSRETURN_CVFSFile_LoadFailed = 0x01000002;
extern const PSRETURN PSRETURN_Deserialize_InvalidCharInString = 0x02000001;
extern const PSRETURN PSRETURN_Deserialize_OutOfBounds = 0x02000002;
extern const PSRETURN PSRETURN_Deserialize_ReadFailed = 0x02000003;
extern const PSRETURN PSRETURN_Deserialize_ScriptError = 0x02000004;
extern const PSRETURN PSRETURN_DllLoader_DllNotLoaded = 0x03000001;
extern const PSRETURN PSRETURN_DllLoader_SymbolNotFound = 0x03000002;
extern const PSRETURN PSRETURN_Error_InvalidError = 0x04000001;
extern const PSRETURN PSRETURN_File_InvalidType = 0x05000001;
extern const PSRETURN PSRETURN_File_InvalidVersion = 0x05000002;
extern const PSRETURN PSRETURN_File_OpenFailed = 0x05000003;
extern const PSRETURN PSRETURN_File_ReadFailed = 0x05000004;
extern const PSRETURN PSRETURN_File_UnexpectedEOF = 0x05000005;
extern const PSRETURN PSRETURN_File_WriteFailed = 0x05000006;
extern const PSRETURN PSRETURN_GUI_InvalidSetting = 0x06000001;
extern const PSRETURN PSRETURN_GUI_JSOpenFailed = 0x06000002;
extern const PSRETURN PSRETURN_GUI_NameAmbiguity = 0x06000003;
extern const PSRETURN PSRETURN_GUI_NullObjectProvided = 0x06000004;
extern const PSRETURN PSRETURN_GUI_ObjectNeedsName = 0x06000005;
extern const PSRETURN PSRETURN_GUI_OperationNeedsGUIObject = 0x06000006;
extern const PSRETURN PSRETURN_GUI_UnableToParse = 0x06000007;
extern const PSRETURN PSRETURN_Game_World_MapLoadFailed = 0x07030001;
extern const PSRETURN PSRETURN_Scripting_DefineType_AlreadyExists = 0x08010001;
extern const PSRETURN PSRETURN_Scripting_DefineType_CreationFailed = 0x08010002;
extern const PSRETURN PSRETURN_Scripting_LoadFile_EvalErrors = 0x08020001;
extern const PSRETURN PSRETURN_Scripting_LoadFile_OpenFailed = 0x08020002;
extern const PSRETURN PSRETURN_Scripting_CallFunctionFailed = 0x08000001;
extern const PSRETURN PSRETURN_Scripting_ConversionFailed = 0x08000002;
extern const PSRETURN PSRETURN_Scripting_CreateObjectFailed = 0x08000003;
extern const PSRETURN PSRETURN_Scripting_DefineConstantFailed = 0x08000004;
extern const PSRETURN PSRETURN_Scripting_RegisterFunctionFailed = 0x08000005;
extern const PSRETURN PSRETURN_Scripting_SetupFailed = 0x08000006;
extern const PSRETURN PSRETURN_Scripting_TypeDoesNotExist = 0x08000007;
extern const PSRETURN PSRETURN_Serialize_InvalidCharInString = 0x09000001;
extern const PSRETURN PSRETURN_Serialize_InvalidScriptValue = 0x09000002;
extern const PSRETURN PSRETURN_Serialize_OutOfBounds = 0x09000003;
extern const PSRETURN PSRETURN_Serialize_ScriptError = 0x09000004;
extern const PSRETURN PSRETURN_System_RequiredExtensionsMissing = 0x0a000001;
extern const PSRETURN PSRETURN_System_SDLInitFailed = 0x0a000002;
extern const PSRETURN PSRETURN_System_VmodeFailed = 0x0a000003;
extern const PSRETURN PSRETURN_Xeromyces_XMLOpenFailed = 0x0b000001;
extern const PSRETURN PSRETURN_Xeromyces_XMLParseError = 0x0b000002;

extern const PSRETURN MASK__PSRETURN_CVFSFile = 0xff000000;
extern const PSRETURN CODE__PSRETURN_CVFSFile = 0x01000000;
extern const PSRETURN MASK__PSRETURN_Deserialize = 0xff000000;
extern const PSRETURN CODE__PSRETURN_Deserialize = 0x02000000;
extern const PSRETURN MASK__PSRETURN_DllLoader = 0xff000000;
extern const PSRETURN CODE__PSRETURN_DllLoader = 0x03000000;
extern const PSRETURN MASK__PSRETURN_Error = 0xff000000;
extern const PSRETURN CODE__PSRETURN_Error = 0x04000000;
extern const PSRETURN MASK__PSRETURN_File = 0xff000000;
extern const PSRETURN CODE__PSRETURN_File = 0x05000000;
extern const PSRETURN MASK__PSRETURN_GUI = 0xff000000;
extern const PSRETURN CODE__PSRETURN_GUI = 0x06000000;
extern const PSRETURN MASK__PSRETURN_Game = 0xff000000;
extern const PSRETURN CODE__PSRETURN_Game = 0x07000000;
extern const PSRETURN MASK__PSRETURN_Scripting = 0xff000000;
extern const PSRETURN CODE__PSRETURN_Scripting = 0x08000000;
extern const PSRETURN MASK__PSRETURN_Serialize = 0xff000000;
extern const PSRETURN CODE__PSRETURN_Serialize = 0x09000000;
extern const PSRETURN MASK__PSRETURN_System = 0x0a000000;
extern const PSRETURN CODE__PSRETURN_System = 0x0a000000;
extern const PSRETURN MASK__PSRETURN_Xeromyces = 0x0b000000;
extern const PSRETURN CODE__PSRETURN_Xeromyces = 0x0b000000;
extern const PSRETURN MASK__PSRETURN_Game_World = 0xffff0000;
extern const PSRETURN CODE__PSRETURN_Game_World = 0x07030000;
extern const PSRETURN MASK__PSRETURN_Scripting_DefineType = 0xffff0000;
extern const PSRETURN CODE__PSRETURN_Scripting_DefineType = 0x08010000;
extern const PSRETURN MASK__PSRETURN_Scripting_LoadFile = 0xffff0000;
extern const PSRETURN CODE__PSRETURN_Scripting_LoadFile = 0x08020000;

extern const PSRETURN MASK__PSRETURN_CVFSFile_AlreadyLoaded = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_CVFSFile_AlreadyLoaded = 0x01000001;
extern const PSRETURN MASK__PSRETURN_CVFSFile_LoadFailed = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_CVFSFile_LoadFailed = 0x01000002;
extern const PSRETURN MASK__PSRETURN_Deserialize_InvalidCharInString = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_Deserialize_InvalidCharInString = 0x02000001;
extern const PSRETURN MASK__PSRETURN_Deserialize_OutOfBounds = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_Deserialize_OutOfBounds = 0x02000002;
extern const PSRETURN MASK__PSRETURN_Deserialize_ReadFailed = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_Deserialize_ReadFailed = 0x02000003;
extern const PSRETURN MASK__PSRETURN_Deserialize_ScriptError = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_Deserialize_ScriptError = 0x02000004;
extern const PSRETURN MASK__PSRETURN_DllLoader_DllNotLoaded = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_DllLoader_DllNotLoaded = 0x03000001;
extern const PSRETURN MASK__PSRETURN_DllLoader_SymbolNotFound = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_DllLoader_SymbolNotFound = 0x03000002;
extern const PSRETURN MASK__PSRETURN_Error_InvalidError = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_Error_InvalidError = 0x04000001;
extern const PSRETURN MASK__PSRETURN_File_InvalidType = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_File_InvalidType = 0x05000001;
extern const PSRETURN MASK__PSRETURN_File_InvalidVersion = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_File_InvalidVersion = 0x05000002;
extern const PSRETURN MASK__PSRETURN_File_OpenFailed = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_File_OpenFailed = 0x05000003;
extern const PSRETURN MASK__PSRETURN_File_ReadFailed = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_File_ReadFailed = 0x05000004;
extern const PSRETURN MASK__PSRETURN_File_UnexpectedEOF = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_File_UnexpectedEOF = 0x05000005;
extern const PSRETURN MASK__PSRETURN_File_WriteFailed = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_File_WriteFailed = 0x05000006;
extern const PSRETURN MASK__PSRETURN_GUI_InvalidSetting = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_GUI_InvalidSetting = 0x06000001;
extern const PSRETURN MASK__PSRETURN_GUI_JSOpenFailed = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_GUI_JSOpenFailed = 0x06000002;
extern const PSRETURN MASK__PSRETURN_GUI_NameAmbiguity = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_GUI_NameAmbiguity = 0x06000003;
extern const PSRETURN MASK__PSRETURN_GUI_NullObjectProvided = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_GUI_NullObjectProvided = 0x06000004;
extern const PSRETURN MASK__PSRETURN_GUI_ObjectNeedsName = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_GUI_ObjectNeedsName = 0x06000005;
extern const PSRETURN MASK__PSRETURN_GUI_OperationNeedsGUIObject = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_GUI_OperationNeedsGUIObject = 0x06000006;
extern const PSRETURN MASK__PSRETURN_GUI_UnableToParse = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_GUI_UnableToParse = 0x06000007;
extern const PSRETURN MASK__PSRETURN_Game_World_MapLoadFailed = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_Game_World_MapLoadFailed = 0x07030001;
extern const PSRETURN MASK__PSRETURN_Scripting_DefineType_AlreadyExists = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_Scripting_DefineType_AlreadyExists = 0x08010001;
extern const PSRETURN MASK__PSRETURN_Scripting_DefineType_CreationFailed = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_Scripting_DefineType_CreationFailed = 0x08010002;
extern const PSRETURN MASK__PSRETURN_Scripting_LoadFile_EvalErrors = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_Scripting_LoadFile_EvalErrors = 0x08020001;
extern const PSRETURN MASK__PSRETURN_Scripting_LoadFile_OpenFailed = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_Scripting_LoadFile_OpenFailed = 0x08020002;
extern const PSRETURN MASK__PSRETURN_Scripting_CallFunctionFailed = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_Scripting_CallFunctionFailed = 0x08000001;
extern const PSRETURN MASK__PSRETURN_Scripting_ConversionFailed = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_Scripting_ConversionFailed = 0x08000002;
extern const PSRETURN MASK__PSRETURN_Scripting_CreateObjectFailed = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_Scripting_CreateObjectFailed = 0x08000003;
extern const PSRETURN MASK__PSRETURN_Scripting_DefineConstantFailed = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_Scripting_DefineConstantFailed = 0x08000004;
extern const PSRETURN MASK__PSRETURN_Scripting_RegisterFunctionFailed = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_Scripting_RegisterFunctionFailed = 0x08000005;
extern const PSRETURN MASK__PSRETURN_Scripting_SetupFailed = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_Scripting_SetupFailed = 0x08000006;
extern const PSRETURN MASK__PSRETURN_Scripting_TypeDoesNotExist = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_Scripting_TypeDoesNotExist = 0x08000007;
extern const PSRETURN MASK__PSRETURN_Serialize_InvalidCharInString = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_Serialize_InvalidCharInString = 0x09000001;
extern const PSRETURN MASK__PSRETURN_Serialize_InvalidScriptValue = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_Serialize_InvalidScriptValue = 0x09000002;
extern const PSRETURN MASK__PSRETURN_Serialize_OutOfBounds = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_Serialize_OutOfBounds = 0x09000003;
extern const PSRETURN MASK__PSRETURN_Serialize_ScriptError = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_Serialize_ScriptError = 0x09000004;
extern const PSRETURN MASK__PSRETURN_System_RequiredExtensionsMissing = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_System_RequiredExtensionsMissing = 0x0a000001;
extern const PSRETURN MASK__PSRETURN_System_SDLInitFailed = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_System_SDLInitFailed = 0x0a000002;
extern const PSRETURN MASK__PSRETURN_System_VmodeFailed = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_System_VmodeFailed = 0x0a000003;
extern const PSRETURN MASK__PSRETURN_Xeromyces_XMLOpenFailed = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_Xeromyces_XMLOpenFailed = 0x0b000001;
extern const PSRETURN MASK__PSRETURN_Xeromyces_XMLParseError = 0xffffffff;
extern const PSRETURN CODE__PSRETURN_Xeromyces_XMLParseError = 0x0b000002;

PSERROR_CVFSFile::PSERROR_CVFSFile(const char* msg) : PSERROR(msg) { }
PSERROR_Deserialize::PSERROR_Deserialize(const char* msg) : PSERROR(msg) { }
PSERROR_DllLoader::PSERROR_DllLoader(const char* msg) : PSERROR(msg) { }
PSERROR_Error::PSERROR_Error(const char* msg) : PSERROR(msg) { }
PSERROR_File::PSERROR_File(const char* msg) : PSERROR(msg) { }
PSERROR_GUI::PSERROR_GUI(const char* msg) : PSERROR(msg) { }
PSERROR_Game::PSERROR_Game(const char* msg) : PSERROR(msg) { }
PSERROR_Scripting::PSERROR_Scripting(const char* msg) : PSERROR(msg) { }
PSERROR_Serialize::PSERROR_Serialize(const char* msg) : PSERROR(msg) { }
PSERROR_System::PSERROR_System(const char* msg) : PSERROR(msg) { }
PSERROR_Xeromyces::PSERROR_Xeromyces(const char* msg) : PSERROR(msg) { }
PSERROR_Game_World::PSERROR_Game_World(const char* msg) : PSERROR_Game(msg) { }
PSERROR_Scripting_DefineType::PSERROR_Scripting_DefineType(const char* msg) : PSERROR_Scripting(msg) { }
PSERROR_Scripting_LoadFile::PSERROR_Scripting_LoadFile(const char* msg) : PSERROR_Scripting(msg) { }

PSERROR_CVFSFile_AlreadyLoaded::PSERROR_CVFSFile_AlreadyLoaded() : PSERROR_CVFSFile(NULL) { }
PSERROR_CVFSFile_AlreadyLoaded::PSERROR_CVFSFile_AlreadyLoaded(const char* msg) : PSERROR_CVFSFile(msg) { }
PSRETURN PSERROR_CVFSFile_AlreadyLoaded::getCode() const { return 0x01000001; }

PSERROR_CVFSFile_LoadFailed::PSERROR_CVFSFile_LoadFailed() : PSERROR_CVFSFile(NULL) { }
PSERROR_CVFSFile_LoadFailed::PSERROR_CVFSFile_LoadFailed(const char* msg) : PSERROR_CVFSFile(msg) { }
PSRETURN PSERROR_CVFSFile_LoadFailed::getCode() const { return 0x01000002; }

PSERROR_Deserialize_InvalidCharInString::PSERROR_Deserialize_InvalidCharInString() : PSERROR_Deserialize(NULL) { }
PSERROR_Deserialize_InvalidCharInString::PSERROR_Deserialize_InvalidCharInString(const char* msg) : PSERROR_Deserialize(msg) { }
PSRETURN PSERROR_Deserialize_InvalidCharInString::getCode() const { return 0x02000001; }

PSERROR_Deserialize_OutOfBounds::PSERROR_Deserialize_OutOfBounds() : PSERROR_Deserialize(NULL) { }
PSERROR_Deserialize_OutOfBounds::PSERROR_Deserialize_OutOfBounds(const char* msg) : PSERROR_Deserialize(msg) { }
PSRETURN PSERROR_Deserialize_OutOfBounds::getCode() const { return 0x02000002; }

PSERROR_Deserialize_ReadFailed::PSERROR_Deserialize_ReadFailed() : PSERROR_Deserialize(NULL) { }
PSERROR_Deserialize_ReadFailed::PSERROR_Deserialize_ReadFailed(const char* msg) : PSERROR_Deserialize(msg) { }
PSRETURN PSERROR_Deserialize_ReadFailed::getCode() const { return 0x02000003; }

PSERROR_Deserialize_ScriptError::PSERROR_Deserialize_ScriptError() : PSERROR_Deserialize(NULL) { }
PSERROR_Deserialize_ScriptError::PSERROR_Deserialize_ScriptError(const char* msg) : PSERROR_Deserialize(msg) { }
PSRETURN PSERROR_Deserialize_ScriptError::getCode() const { return 0x02000004; }

PSERROR_DllLoader_DllNotLoaded::PSERROR_DllLoader_DllNotLoaded() : PSERROR_DllLoader(NULL) { }
PSERROR_DllLoader_DllNotLoaded::PSERROR_DllLoader_DllNotLoaded(const char* msg) : PSERROR_DllLoader(msg) { }
PSRETURN PSERROR_DllLoader_DllNotLoaded::getCode() const { return 0x03000001; }

PSERROR_DllLoader_SymbolNotFound::PSERROR_DllLoader_SymbolNotFound() : PSERROR_DllLoader(NULL) { }
PSERROR_DllLoader_SymbolNotFound::PSERROR_DllLoader_SymbolNotFound(const char* msg) : PSERROR_DllLoader(msg) { }
PSRETURN PSERROR_DllLoader_SymbolNotFound::getCode() const { return 0x03000002; }

PSERROR_Error_InvalidError::PSERROR_Error_InvalidError() : PSERROR_Error(NULL) { }
PSERROR_Error_InvalidError::PSERROR_Error_InvalidError(const char* msg) : PSERROR_Error(msg) { }
PSRETURN PSERROR_Error_InvalidError::getCode() const { return 0x04000001; }

PSERROR_File_InvalidType::PSERROR_File_InvalidType() : PSERROR_File(NULL) { }
PSERROR_File_InvalidType::PSERROR_File_InvalidType(const char* msg) : PSERROR_File(msg) { }
PSRETURN PSERROR_File_InvalidType::getCode() const { return 0x05000001; }

PSERROR_File_InvalidVersion::PSERROR_File_InvalidVersion() : PSERROR_File(NULL) { }
PSERROR_File_InvalidVersion::PSERROR_File_InvalidVersion(const char* msg) : PSERROR_File(msg) { }
PSRETURN PSERROR_File_InvalidVersion::getCode() const { return 0x05000002; }

PSERROR_File_OpenFailed::PSERROR_File_OpenFailed() : PSERROR_File(NULL) { }
PSERROR_File_OpenFailed::PSERROR_File_OpenFailed(const char* msg) : PSERROR_File(msg) { }
PSRETURN PSERROR_File_OpenFailed::getCode() const { return 0x05000003; }

PSERROR_File_ReadFailed::PSERROR_File_ReadFailed() : PSERROR_File(NULL) { }
PSERROR_File_ReadFailed::PSERROR_File_ReadFailed(const char* msg) : PSERROR_File(msg) { }
PSRETURN PSERROR_File_ReadFailed::getCode() const { return 0x05000004; }

PSERROR_File_UnexpectedEOF::PSERROR_File_UnexpectedEOF() : PSERROR_File(NULL) { }
PSERROR_File_UnexpectedEOF::PSERROR_File_UnexpectedEOF(const char* msg) : PSERROR_File(msg) { }
PSRETURN PSERROR_File_UnexpectedEOF::getCode() const { return 0x05000005; }

PSERROR_File_WriteFailed::PSERROR_File_WriteFailed() : PSERROR_File(NULL) { }
PSERROR_File_WriteFailed::PSERROR_File_WriteFailed(const char* msg) : PSERROR_File(msg) { }
PSRETURN PSERROR_File_WriteFailed::getCode() const { return 0x05000006; }

PSERROR_GUI_InvalidSetting::PSERROR_GUI_InvalidSetting() : PSERROR_GUI(NULL) { }
PSERROR_GUI_InvalidSetting::PSERROR_GUI_InvalidSetting(const char* msg) : PSERROR_GUI(msg) { }
PSRETURN PSERROR_GUI_InvalidSetting::getCode() const { return 0x06000001; }

PSERROR_GUI_JSOpenFailed::PSERROR_GUI_JSOpenFailed() : PSERROR_GUI(NULL) { }
PSERROR_GUI_JSOpenFailed::PSERROR_GUI_JSOpenFailed(const char* msg) : PSERROR_GUI(msg) { }
PSRETURN PSERROR_GUI_JSOpenFailed::getCode() const { return 0x06000002; }

PSERROR_GUI_NameAmbiguity::PSERROR_GUI_NameAmbiguity() : PSERROR_GUI(NULL) { }
PSERROR_GUI_NameAmbiguity::PSERROR_GUI_NameAmbiguity(const char* msg) : PSERROR_GUI(msg) { }
PSRETURN PSERROR_GUI_NameAmbiguity::getCode() const { return 0x06000003; }

PSERROR_GUI_NullObjectProvided::PSERROR_GUI_NullObjectProvided() : PSERROR_GUI(NULL) { }
PSERROR_GUI_NullObjectProvided::PSERROR_GUI_NullObjectProvided(const char* msg) : PSERROR_GUI(msg) { }
PSRETURN PSERROR_GUI_NullObjectProvided::getCode() const { return 0x06000004; }

PSERROR_GUI_ObjectNeedsName::PSERROR_GUI_ObjectNeedsName() : PSERROR_GUI(NULL) { }
PSERROR_GUI_ObjectNeedsName::PSERROR_GUI_ObjectNeedsName(const char* msg) : PSERROR_GUI(msg) { }
PSRETURN PSERROR_GUI_ObjectNeedsName::getCode() const { return 0x06000005; }

PSERROR_GUI_OperationNeedsGUIObject::PSERROR_GUI_OperationNeedsGUIObject() : PSERROR_GUI(NULL) { }
PSERROR_GUI_OperationNeedsGUIObject::PSERROR_GUI_OperationNeedsGUIObject(const char* msg) : PSERROR_GUI(msg) { }
PSRETURN PSERROR_GUI_OperationNeedsGUIObject::getCode() const { return 0x06000006; }

PSERROR_GUI_UnableToParse::PSERROR_GUI_UnableToParse() : PSERROR_GUI(NULL) { }
PSERROR_GUI_UnableToParse::PSERROR_GUI_UnableToParse(const char* msg) : PSERROR_GUI(msg) { }
PSRETURN PSERROR_GUI_UnableToParse::getCode() const { return 0x06000007; }

PSERROR_Game_World_MapLoadFailed::PSERROR_Game_World_MapLoadFailed() : PSERROR_Game_World(NULL) { }
PSERROR_Game_World_MapLoadFailed::PSERROR_Game_World_MapLoadFailed(const char* msg) : PSERROR_Game_World(msg) { }
PSRETURN PSERROR_Game_World_MapLoadFailed::getCode() const { return 0x07030001; }

PSERROR_Scripting_DefineType_AlreadyExists::PSERROR_Scripting_DefineType_AlreadyExists() : PSERROR_Scripting_DefineType(NULL) { }
PSERROR_Scripting_DefineType_AlreadyExists::PSERROR_Scripting_DefineType_AlreadyExists(const char* msg) : PSERROR_Scripting_DefineType(msg) { }
PSRETURN PSERROR_Scripting_DefineType_AlreadyExists::getCode() const { return 0x08010001; }

PSERROR_Scripting_DefineType_CreationFailed::PSERROR_Scripting_DefineType_CreationFailed() : PSERROR_Scripting_DefineType(NULL) { }
PSERROR_Scripting_DefineType_CreationFailed::PSERROR_Scripting_DefineType_CreationFailed(const char* msg) : PSERROR_Scripting_DefineType(msg) { }
PSRETURN PSERROR_Scripting_DefineType_CreationFailed::getCode() const { return 0x08010002; }

PSERROR_Scripting_LoadFile_EvalErrors::PSERROR_Scripting_LoadFile_EvalErrors() : PSERROR_Scripting_LoadFile(NULL) { }
PSERROR_Scripting_LoadFile_EvalErrors::PSERROR_Scripting_LoadFile_EvalErrors(const char* msg) : PSERROR_Scripting_LoadFile(msg) { }
PSRETURN PSERROR_Scripting_LoadFile_EvalErrors::getCode() const { return 0x08020001; }

PSERROR_Scripting_LoadFile_OpenFailed::PSERROR_Scripting_LoadFile_OpenFailed() : PSERROR_Scripting_LoadFile(NULL) { }
PSERROR_Scripting_LoadFile_OpenFailed::PSERROR_Scripting_LoadFile_OpenFailed(const char* msg) : PSERROR_Scripting_LoadFile(msg) { }
PSRETURN PSERROR_Scripting_LoadFile_OpenFailed::getCode() const { return 0x08020002; }

PSERROR_Scripting_CallFunctionFailed::PSERROR_Scripting_CallFunctionFailed() : PSERROR_Scripting(NULL) { }
PSERROR_Scripting_CallFunctionFailed::PSERROR_Scripting_CallFunctionFailed(const char* msg) : PSERROR_Scripting(msg) { }
PSRETURN PSERROR_Scripting_CallFunctionFailed::getCode() const { return 0x08000001; }

PSERROR_Scripting_ConversionFailed::PSERROR_Scripting_ConversionFailed() : PSERROR_Scripting(NULL) { }
PSERROR_Scripting_ConversionFailed::PSERROR_Scripting_ConversionFailed(const char* msg) : PSERROR_Scripting(msg) { }
PSRETURN PSERROR_Scripting_ConversionFailed::getCode() const { return 0x08000002; }

PSERROR_Scripting_CreateObjectFailed::PSERROR_Scripting_CreateObjectFailed() : PSERROR_Scripting(NULL) { }
PSERROR_Scripting_CreateObjectFailed::PSERROR_Scripting_CreateObjectFailed(const char* msg) : PSERROR_Scripting(msg) { }
PSRETURN PSERROR_Scripting_CreateObjectFailed::getCode() const { return 0x08000003; }

PSERROR_Scripting_DefineConstantFailed::PSERROR_Scripting_DefineConstantFailed() : PSERROR_Scripting(NULL) { }
PSERROR_Scripting_DefineConstantFailed::PSERROR_Scripting_DefineConstantFailed(const char* msg) : PSERROR_Scripting(msg) { }
PSRETURN PSERROR_Scripting_DefineConstantFailed::getCode() const { return 0x08000004; }

PSERROR_Scripting_RegisterFunctionFailed::PSERROR_Scripting_RegisterFunctionFailed() : PSERROR_Scripting(NULL) { }
PSERROR_Scripting_RegisterFunctionFailed::PSERROR_Scripting_RegisterFunctionFailed(const char* msg) : PSERROR_Scripting(msg) { }
PSRETURN PSERROR_Scripting_RegisterFunctionFailed::getCode() const { return 0x08000005; }

PSERROR_Scripting_SetupFailed::PSERROR_Scripting_SetupFailed() : PSERROR_Scripting(NULL) { }
PSERROR_Scripting_SetupFailed::PSERROR_Scripting_SetupFailed(const char* msg) : PSERROR_Scripting(msg) { }
PSRETURN PSERROR_Scripting_SetupFailed::getCode() const { return 0x08000006; }

PSERROR_Scripting_TypeDoesNotExist::PSERROR_Scripting_TypeDoesNotExist() : PSERROR_Scripting(NULL) { }
PSERROR_Scripting_TypeDoesNotExist::PSERROR_Scripting_TypeDoesNotExist(const char* msg) : PSERROR_Scripting(msg) { }
PSRETURN PSERROR_Scripting_TypeDoesNotExist::getCode() const { return 0x08000007; }

PSERROR_Serialize_InvalidCharInString::PSERROR_Serialize_InvalidCharInString() : PSERROR_Serialize(NULL) { }
PSERROR_Serialize_InvalidCharInString::PSERROR_Serialize_InvalidCharInString(const char* msg) : PSERROR_Serialize(msg) { }
PSRETURN PSERROR_Serialize_InvalidCharInString::getCode() const { return 0x09000001; }

PSERROR_Serialize_InvalidScriptValue::PSERROR_Serialize_InvalidScriptValue() : PSERROR_Serialize(NULL) { }
PSERROR_Serialize_InvalidScriptValue::PSERROR_Serialize_InvalidScriptValue(const char* msg) : PSERROR_Serialize(msg) { }
PSRETURN PSERROR_Serialize_InvalidScriptValue::getCode() const { return 0x09000002; }

PSERROR_Serialize_OutOfBounds::PSERROR_Serialize_OutOfBounds() : PSERROR_Serialize(NULL) { }
PSERROR_Serialize_OutOfBounds::PSERROR_Serialize_OutOfBounds(const char* msg) : PSERROR_Serialize(msg) { }
PSRETURN PSERROR_Serialize_OutOfBounds::getCode() const { return 0x09000003; }

PSERROR_Serialize_ScriptError::PSERROR_Serialize_ScriptError() : PSERROR_Serialize(NULL) { }
PSERROR_Serialize_ScriptError::PSERROR_Serialize_ScriptError(const char* msg) : PSERROR_Serialize(msg) { }
PSRETURN PSERROR_Serialize_ScriptError::getCode() const { return 0x09000004; }

PSERROR_System_RequiredExtensionsMissing::PSERROR_System_RequiredExtensionsMissing() : PSERROR_System(NULL) { }
PSERROR_System_RequiredExtensionsMissing::PSERROR_System_RequiredExtensionsMissing(const char* msg) : PSERROR_System(msg) { }
PSRETURN PSERROR_System_RequiredExtensionsMissing::getCode() const { return 0x0a000001; }

PSERROR_System_SDLInitFailed::PSERROR_System_SDLInitFailed() : PSERROR_System(NULL) { }
PSERROR_System_SDLInitFailed::PSERROR_System_SDLInitFailed(const char* msg) : PSERROR_System(msg) { }
PSRETURN PSERROR_System_SDLInitFailed::getCode() const { return 0x0a000002; }

PSERROR_System_VmodeFailed::PSERROR_System_VmodeFailed() : PSERROR_System(NULL) { }
PSERROR_System_VmodeFailed::PSERROR_System_VmodeFailed(const char* msg) : PSERROR_System(msg) { }
PSRETURN PSERROR_System_VmodeFailed::getCode() const { return 0x0a000003; }

PSERROR_Xeromyces_XMLOpenFailed::PSERROR_Xeromyces_XMLOpenFailed() : PSERROR_Xeromyces(NULL) { }
PSERROR_Xeromyces_XMLOpenFailed::PSERROR_Xeromyces_XMLOpenFailed(const char* msg) : PSERROR_Xeromyces(msg) { }
PSRETURN PSERROR_Xeromyces_XMLOpenFailed::getCode() const { return 0x0b000001; }

PSERROR_Xeromyces_XMLParseError::PSERROR_Xeromyces_XMLParseError() : PSERROR_Xeromyces(NULL) { }
PSERROR_Xeromyces_XMLParseError::PSERROR_Xeromyces_XMLParseError(const char* msg) : PSERROR_Xeromyces(msg) { }
PSRETURN PSERROR_Xeromyces_XMLParseError::getCode() const { return 0x0b000002; }


PSERROR::PSERROR(const char* msg) : m_msg(msg) { }

const char* PSERROR::what() const throw ()
{
	return m_msg ? m_msg : GetErrorString(getCode());
}

const char* GetErrorString(PSRETURN code)
{
	switch (code)
	{
	case 0x01000001: return "CVFSFile_AlreadyLoaded";
	case 0x01000002: return "CVFSFile_LoadFailed";
	case 0x02000001: return "Deserialize_InvalidCharInString";
	case 0x02000002: return "Deserialize_OutOfBounds";
	case 0x02000003: return "Deserialize_ReadFailed";
	case 0x02000004: return "Deserialize_ScriptError";
	case 0x03000001: return "DllLoader_DllNotLoaded";
	case 0x03000002: return "DllLoader_SymbolNotFound";
	case 0x04000001: return "Error_InvalidError";
	case 0x05000001: return "File_InvalidType";
	case 0x05000002: return "File_InvalidVersion";
	case 0x05000003: return "File_OpenFailed";
	case 0x05000004: return "File_ReadFailed";
	case 0x05000005: return "File_UnexpectedEOF";
	case 0x05000006: return "File_WriteFailed";
	case 0x06000001: return "GUI_InvalidSetting";
	case 0x06000002: return "GUI_JSOpenFailed";
	case 0x06000003: return "GUI_NameAmbiguity";
	case 0x06000004: return "GUI_NullObjectProvided";
	case 0x06000005: return "GUI_ObjectNeedsName";
	case 0x06000006: return "GUI_OperationNeedsGUIObject";
	case 0x06000007: return "GUI_UnableToParse";
	case 0x07030001: return "Game_World_MapLoadFailed";
	case 0x08010001: return "Scripting_DefineType_AlreadyExists";
	case 0x08010002: return "Scripting_DefineType_CreationFailed";
	case 0x08020001: return "Scripting_LoadFile_EvalErrors";
	case 0x08020002: return "Scripting_LoadFile_OpenFailed";
	case 0x08000001: return "Scripting_CallFunctionFailed";
	case 0x08000002: return "Scripting_ConversionFailed";
	case 0x08000003: return "Scripting_CreateObjectFailed";
	case 0x08000004: return "Scripting_DefineConstantFailed";
	case 0x08000005: return "Scripting_RegisterFunctionFailed";
	case 0x08000006: return "Scripting_SetupFailed";
	case 0x08000007: return "Scripting_TypeDoesNotExist";
	case 0x09000001: return "Serialize_InvalidCharInString";
	case 0x09000002: return "Serialize_InvalidScriptValue";
	case 0x09000003: return "Serialize_OutOfBounds";
	case 0x09000004: return "Serialize_ScriptError";
	case 0x0a000001: return "System_RequiredExtensionsMissing";
	case 0x0a000002: return "System_SDLInitFailed";
	case 0x0a000003: return "System_VmodeFailed";
	case 0x0b000001: return "Xeromyces_XMLOpenFailed";
	case 0x0b000002: return "Xeromyces_XMLParseError";

	default: return "Unrecognised error";
	}
}

void ThrowError(PSRETURN code)
{
	switch (code)  // Use 'break' in case someone tries to continue from the exception
	{
	case 0x01000001: throw PSERROR_CVFSFile_AlreadyLoaded(); break;
	case 0x01000002: throw PSERROR_CVFSFile_LoadFailed(); break;
	case 0x02000001: throw PSERROR_Deserialize_InvalidCharInString(); break;
	case 0x02000002: throw PSERROR_Deserialize_OutOfBounds(); break;
	case 0x02000003: throw PSERROR_Deserialize_ReadFailed(); break;
	case 0x02000004: throw PSERROR_Deserialize_ScriptError(); break;
	case 0x03000001: throw PSERROR_DllLoader_DllNotLoaded(); break;
	case 0x03000002: throw PSERROR_DllLoader_SymbolNotFound(); break;
	case 0x04000001: throw PSERROR_Error_InvalidError(); break;
	case 0x05000001: throw PSERROR_File_InvalidType(); break;
	case 0x05000002: throw PSERROR_File_InvalidVersion(); break;
	case 0x05000003: throw PSERROR_File_OpenFailed(); break;
	case 0x05000004: throw PSERROR_File_ReadFailed(); break;
	case 0x05000005: throw PSERROR_File_UnexpectedEOF(); break;
	case 0x05000006: throw PSERROR_File_WriteFailed(); break;
	case 0x06000001: throw PSERROR_GUI_InvalidSetting(); break;
	case 0x06000002: throw PSERROR_GUI_JSOpenFailed(); break;
	case 0x06000003: throw PSERROR_GUI_NameAmbiguity(); break;
	case 0x06000004: throw PSERROR_GUI_NullObjectProvided(); break;
	case 0x06000005: throw PSERROR_GUI_ObjectNeedsName(); break;
	case 0x06000006: throw PSERROR_GUI_OperationNeedsGUIObject(); break;
	case 0x06000007: throw PSERROR_GUI_UnableToParse(); break;
	case 0x07030001: throw PSERROR_Game_World_MapLoadFailed(); break;
	case 0x08010001: throw PSERROR_Scripting_DefineType_AlreadyExists(); break;
	case 0x08010002: throw PSERROR_Scripting_DefineType_CreationFailed(); break;
	case 0x08020001: throw PSERROR_Scripting_LoadFile_EvalErrors(); break;
	case 0x08020002: throw PSERROR_Scripting_LoadFile_OpenFailed(); break;
	case 0x08000001: throw PSERROR_Scripting_CallFunctionFailed(); break;
	case 0x08000002: throw PSERROR_Scripting_ConversionFailed(); break;
	case 0x08000003: throw PSERROR_Scripting_CreateObjectFailed(); break;
	case 0x08000004: throw PSERROR_Scripting_DefineConstantFailed(); break;
	case 0x08000005: throw PSERROR_Scripting_RegisterFunctionFailed(); break;
	case 0x08000006: throw PSERROR_Scripting_SetupFailed(); break;
	case 0x08000007: throw PSERROR_Scripting_TypeDoesNotExist(); break;
	case 0x09000001: throw PSERROR_Serialize_InvalidCharInString(); break;
	case 0x09000002: throw PSERROR_Serialize_InvalidScriptValue(); break;
	case 0x09000003: throw PSERROR_Serialize_OutOfBounds(); break;
	case 0x09000004: throw PSERROR_Serialize_ScriptError(); break;
	case 0x0a000001: throw PSERROR_System_RequiredExtensionsMissing(); break;
	case 0x0a000002: throw PSERROR_System_SDLInitFailed(); break;
	case 0x0a000003: throw PSERROR_System_VmodeFailed(); break;
	case 0x0b000001: throw PSERROR_Xeromyces_XMLOpenFailed(); break;
	case 0x0b000002: throw PSERROR_Xeromyces_XMLParseError(); break;

	default: throw PSERROR_Error_InvalidError(); // Hmm...
	}
}
