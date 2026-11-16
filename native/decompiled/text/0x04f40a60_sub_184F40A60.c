// sub_184F40A60
// rva 0x04f40a60  size 64  section .text  group text
// window base 0x184f40a60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F40A60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r15
  __int64 v6; // rcx
  __int64 v8; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v8 <= *(_QWORD *)(v5 + 8) )
  {
    MEMORY[0x181EB84E0]();
    return sub_184F40AA0();
  }
  else
  {
    if ( a5 == (_DWORD)a3 )
    {
      v6 = 0;
    }
    else
    {
      if ( (_DWORD)a3 != 0 )
        JUMPOUT(0x309E56A7ELL);
      v6 = 0xFFFFFFFFLL;
    }
    if ( *(int *)(v5 + 16) <= 0 )
      MEMORY[0x18277F280](a1, a2, a3, a4: v6);
    return (unsigned int)v6;
  }
}
