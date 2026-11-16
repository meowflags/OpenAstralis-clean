// sub_4F49920
// rva 0x04f49920  size 61  section .text  group text
// window base 0x184f49920: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F49920(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r15
  __int64 v5; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v5 <= *(_QWORD *)(v3 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F49960();
  }
  else
  {
    if ( *(int *)(v3 + 16) <= 0 )
      sub_277F280();
    if ( a3 >= 55296 )
      JUMPOUT(0x309E5F94BLL);
    return 0;
  }
}
