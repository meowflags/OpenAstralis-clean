// sub_158E5A0
// rva 0x0158e5a0  size 363  section .text  group text
// window base 0x18158e5a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_158E5A0(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        _DWORD *a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  _DWORD *v12; // r14
  __int64 v13; // r15
  _DWORD *v14; // rcx
  __int64 result; // rax
  int v16; // eax
  int v17; // ebx
  __int64 v18; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v19; // [rsp+28h] [rbp-10h]
  _DWORD *v20; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v13 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_158E720();
  }
  v20 = a3;
  v19 = a5;
  if ( a5 == a3 )
  {
    v14 = v12 + 94152900;
    result = 1;
LABEL_6:
    if ( *(int *)(v13 + 16) <= 0 )
      return sub_277F280(a1, a2, a3: v19 == v20, a4: v14);
    return result;
  }
  v14 = v12 + 94152910;
  if ( a5 == v12 )
    JUMPOUT(0x18158E6BDLL);
  if ( *a5 >> 3 != 4474642 )
  {
    result = 0;
    goto LABEL_6;
  }
  v16 = a3[2];
  v17 = a5[2];
  if ( v17 == v16 )
    JUMPOUT(0x18158E698LL);
  if ( v16 == 0 )
    JUMPOUT(0x18158E6AELL);
  return sub_18158E640(
           a1,
           a2,
           a3: (int)v12 + 8 * v16,
           a4: (_DWORD)v14,
           a5: (int)v12 + 8 * v17,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12);
}
