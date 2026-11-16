// sub_2756240
// rva 0x02756240  size 280  section .text  group text
// window base 0x182756240: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2756240(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, __int64, _DWORD *, _DWORD *, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rdx
  int v10; // r9d
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_23;
  if ( a5 == v6 )
    goto LABEL_22;
  if ( a5[2] != 3 )
    goto LABEL_22;
  v9 = (unsigned int)a5[3];
  if ( (_DWORD)v9 == 0 )
    goto LABEL_22;
  v10 = v6[2 * v9] >> 3;
  switch ( v10 )
  {
    case 4260452:
      v11 = *(_QWORD *)&v6[2 * v9 + 2];
      goto LABEL_7;
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
LABEL_7:
      v12 = (unsigned int)a5[4];
      if ( (_DWORD)v12 != 0 && v6[2 * v12] >> 3 != 4435147 )
        goto LABEL_22;
      v13 = (unsigned int)a5[5];
      if ( (_DWORD)v13 != 0 && v6[2 * v13] >> 3 != 4260335 )
        goto LABEL_22;
      result = a6(a1, a2, a3: v11, a4: &v6[2 * v13], a5: &v6[2 * v12], a6: &v6[2 * v13]);
      if ( *(int *)(v7 + 16) <= 0 )
        return sub_277F280(a1: v16, a2: v17, a3: v15);
      return result;
    default:
LABEL_22:
      sub_2757000(a1, a2, a3: a5);
LABEL_23:
      sub_1EB84E0();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_2756360();
  }
}
