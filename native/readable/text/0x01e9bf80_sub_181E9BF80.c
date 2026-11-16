// sub_1E9BF80
// rva 0x01e9bf80  size 200  section .text  group text
// window base 0x181e9bf80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E9BF80(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  _DWORD *v9; // rax
  int v10; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // r8
  char v17; // [rsp+0h] [rbp-18h] BYREF
  int v18; // [rsp+10h] [rbp-8h]
  int v19; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v17);
LABEL_13:
    sub_2771080();
    goto LABEL_14;
  }
  v8 = (unsigned int)v6[94163144];
  if ( (_DWORD)v8 == 47076562 )
    v9 = v6 + 14544472;
  else
    v9 = &v6[2 * v8];
  if ( v9 != v6 && *v9 >> 3 != 4260808 )
  {
LABEL_16:
    sub_276FC00(a1, a2, a3: v9, a4, a5: v6 + 8521616);
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1E9C060(a1: v14, a2: v15, a3: v12, a4: v13, a5: v16);
  }
  if ( v9 == v6 )
    goto LABEL_13;
  v10 = v9[1];
  if ( (unsigned int)v10 > 0x64 )
  {
LABEL_14:
    if ( v10 >= 0 )
      JUMPOUT(0x303D2602BLL);
    v19 = v10;
    v18 = 0;
    v9 = (_DWORD *)sub_28C1C40(a1, a2, a3: v6 + 92193408);
    goto LABEL_16;
  }
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280();
  return (unsigned int)v10;
}
