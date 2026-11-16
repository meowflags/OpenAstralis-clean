// sub_18503A3E0
// rva 0x0503a3e0  size 156  section .text  group text
// window base 0x18503a3e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18503A3E0(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // r15
  unsigned __int64 v9; // r8
  char v11; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-10h]
  _DWORD *v13; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_18503A480();
  }
  else
  {
    v9 = *(_QWORD *)(v8 + 40);
    if ( v9 + 24 > *(_QWORD *)(v8 + 32) )
    {
      return sub_18503A456(a1, a2, (_DWORD)a3, a4, a5: v9, a6, a7, a8);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v9 + 24;
      *(_DWORD *)v9 = 34195320;
      *(_DWORD *)(v9 + 4) = 0;
      *(_QWORD *)(v9 + 8) = 0;
      *(_QWORD *)(v9 + 16) = 0;
      v12 = v9;
      v13 = a3;
      sub_185036D00(a1, a2, a3: v9, a4, a5: a3, a6, a7: v11);
      if ( *(int *)(v8 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return v12;
    }
  }
}
