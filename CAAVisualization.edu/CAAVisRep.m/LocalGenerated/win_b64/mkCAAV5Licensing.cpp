












__declspec(dllimport) void AbortProcCAA(const char*the_lib);
extern "C" __declspec(dllimport) int _init_lib_const(const char*the_lib, const char*the_mark);




























































class DASSAULT_SYSTEMES_CAAV5_CLASS_CAAVisRep{public: DASSAULT_SYSTEMES_CAAV5_CLASS_CAAVisRep( const char * ipKey, const char * iplibname ); ~DASSAULT_SYSTEMES_CAAV5_CLASS_CAAVisRep( ); const char * DASSAULT_SYSTEMES_CAAV5_LICENCE_KEY() const;private: const char * _DASSAULT_SYSTEMES_CAAV5_LICENCE_KEY; const char * _the_lib_name;};DASSAULT_SYSTEMES_CAAV5_CLASS_CAAVisRep::DASSAULT_SYSTEMES_CAAV5_CLASS_CAAVisRep( const char * ipKey, const char * iplibname ): _DASSAULT_SYSTEMES_CAAV5_LICENCE_KEY( ipKey ), _the_lib_name( iplibname ){ if ( _init_lib_const( _the_lib_name, _DASSAULT_SYSTEMES_CAAV5_LICENCE_KEY ) != 22 ) AbortProcCAA( _the_lib_name );}DASSAULT_SYSTEMES_CAAV5_CLASS_CAAVisRep::~DASSAULT_SYSTEMES_CAAV5_CLASS_CAAVisRep() {}const char * DASSAULT_SYSTEMES_CAAV5_CLASS_CAAVisRep::DASSAULT_SYSTEMES_CAAV5_LICENCE_KEY() const{ return _DASSAULT_SYSTEMES_CAAV5_LICENCE_KEY; } static DASSAULT_SYSTEMES_CAAV5_CLASS_CAAVisRep DASSAULT_SYSTEMES_CAAV5_LICENCE_CAAVisRep("DSCAAV5LICENCE_XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX_DSCAAV5LICENCE","CAAVisRep"); extern "C" __declspec(dllexport) int DASSAULT_SYSTEMES_CAA2_LICENSING_CAAVisRep( void ) { return 1; }




























