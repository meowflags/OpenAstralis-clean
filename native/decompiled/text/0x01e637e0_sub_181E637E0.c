// sub_181E637E0
// rva 0x01e637e0  size 151  section .text  group text
// window base 0x181e637e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E637E0(int a1, int a2, _DWORD *a3, int a4, int a5, int a6, int a7, __int64 a8)
{
  _DWORD *v8; // r14
  __int64 v9; // r15
  int v10; // eax
  __int64 v12; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v13; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v9 + 8) )
  {
    v13 = a3;
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_181E63880();
  }
  if ( a3 == v8 )
    return sub_181E6382E(a1, a2, (_DWORD)a3, a4, a5, a6, a7, a8);
  v10 = *a3 >> 3;
  if ( v10 != 4261933 )
  {
    if ( v10 == 4326698 )
    {
      if ( *(int *)(v9 + 16) <= 0 )
      {
        v13 = a3;
        MEMORY[0x18277F280]();
        a3 = v13;
      }
      return (unsigned int)a3[18];
    }
    return sub_181E6382E(a1, a2, (_DWORD)a3, a4, a5, a6, a7, a8);
  }
  if ( *(int *)(v9 + 16) <= 0 )
    JUMPOUT(0x181E63845LL);
  return (unsigned int)a3[21];
}
