// sub_1827540C0
// rva 0x027540c0  size 304  section .text  group text
// window base 0x1827540c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827540C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, __int64, __int64, __int64, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rcx
  int v10; // r9d
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_21;
  if ( a5 == v6 )
    goto LABEL_20;
  if ( a5[2] != 2 )
    goto LABEL_20;
  v9 = (unsigned int)a5[3];
  if ( (_DWORD)v9 == 0 )
    goto LABEL_20;
  v10 = v6[2 * v9] >> 3;
  switch ( v10 )
  {
    case 4260452:
      v11 = *(_QWORD *)&v6[2 * v9 + 2];
LABEL_7:
      v12 = v11;
      v13 = (unsigned int)a5[4];
      if ( (_DWORD)v13 != 0 )
      {
        v14 = v6[2 * v13] >> 3;
        a2 = (unsigned int)v6[2 * v14 + 11];
        a1 = (unsigned int)a2 & (0x56Eu >> HIBYTE(v6[2 * v14 + 11]));
        v11 = (unsigned __int16)v6[2 * (unsigned int)v6[2 * v14 + 5] + 3 + a1];
        if ( (_DWORD)v11 != 1390 )
          goto LABEL_20;
      }
      result = a6(a1, a2, a3, a4: v11, a5: v12, a6: &v6[2 * v13]);
      if ( *(int *)(v7 + 16) <= 0 )
        return sub_18277F280(a1: v17, a2: v18, a3: v16);
      return result;
    case 4260808:
      v11 = (int)v6[2 * v9 + 1];
      goto LABEL_7;
    case 4288437:
      v11 = SLOBYTE(v6[2 * v9 + 1]);
      goto LABEL_7;
    case 4288459:
      v11 = SLOWORD(v6[2 * v9 + 1]);
      goto LABEL_7;
    case 4288481:
      v11 = LOWORD(v6[2 * v9 + 1]);
      goto LABEL_7;
    default:
LABEL_20:
      sub_182756FC0();
LABEL_21:
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
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_182754200();
  }
}
