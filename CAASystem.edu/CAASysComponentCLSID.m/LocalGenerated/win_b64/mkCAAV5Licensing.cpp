












__declspec(dllimport) void AbortProcCAA(const char*the_lib);
extern "C" __declspec(dllimport) int _init_lib_const(const char*the_lib, const char*the_mark);




























































class DASSAULT_SYSTEMES_CAAV5_CLASS_CAASysComponentCLSID{public: DASSAULT_SYSTEMES_CAAV5_CLASS_CAASysComponentCLSID( const char * ipKey, const char * iplibname ); ~DASSAULT_SYSTEMES_CAAV5_CLASS_CAASysComponentCLSID( ); const char * DASSAULT_SYSTEMES_CAAV5_LICENCE_KEY() const;private: const char * _DASSAULT_SYSTEMES_CAAV5_LICENCE_KEY; const char * _the_lib_name;};DASSAULT_SYSTEMES_CAAV5_CLASS_CAASysComponentCLSID::DASSAULT_SYSTEMES_CAAV5_CLASS_CAASysComponentCLSID( const char * ipKey, const char * iplibname ): _DASSAULT_SYSTEMES_CAAV5_LICENCE_KEY( ipKey ), _the_lib_name( iplibname ){ if ( _init_lib_const( _the_lib_name, _DASSAULT_SYSTEMES_CAAV5_LICENCE_KEY ) != 22 ) AbortProcCAA( _the_lib_name );}DASSAULT_SYSTEMES_CAAV5_CLASS_CAASysComponentCLSID::~DASSAULT_SYSTEMES_CAAV5_CLASS_CAASysComponentCLSID() {}const char * DASSAULT_SYSTEMES_CAAV5_CLASS_CAASysComponentCLSID::DASSAULT_SYSTEMES_CAAV5_LICENCE_KEY() const{ return _DASSAULT_SYSTEMES_CAAV5_LICENCE_KEY; } static DASSAULT_SYSTEMES_CAAV5_CLASS_CAASysComponentCLSID DASSAULT_SYSTEMES_CAAV5_LICENCE_CAASysComponentCLSID("DSCAAV5LICENCE_XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX_DSCAAV5LICENCE","CAASysComponentCLSID"); extern "C" __declspec(dllexport) int DASSAULT_SYSTEMES_CAA2_LICENSING_CAASysComponentCLSID( void ) { return 1; }




























