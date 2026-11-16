// sub_2754360
// rva 0x02754360  size 309  section .text  group text
// window base 0x182754360: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2754360(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(_QWORD, __int64, _DWORD *, __int64, _QWORD, _QWORD))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // rdx
  __int64 v10; // r9
  unsigned int v11; // r9d
  __int64 v12; // rcx
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
  if ( a5[2] != 4 )
    goto LABEL_22;
  v9 = (unsigned int)a5[3];
  if ( (_DWORD)v9 != 0 && v6[2 * v9] >> 3 != 4260335 )
    goto LABEL_22;
  v10 = (unsigned int)a5[4];
  if ( (_DWORD)v10 == 0 )
    goto LABEL_22;
  a1 = v6[2 * v10] >> 3;
  switch ( (_DWORD)a1 )
  {
    case 0x4103C8:
      v11 = v6[2 * v10 + 1];
LABEL_9:
      a1 = (unsigned int)a5[5];
      if ( (_DWORD)a1 == 0 )
        goto LABEL_22;
      if ( v6[2 * a1] >> 3 != 4261917 )
        goto LABEL_22;
      v12 = (unsigned int)a5[6];
      if ( (_DWORD)v12 == 0 || v6[2 * v12] >> 3 != 4261917 )
        goto LABEL_22;
      v13 = LOBYTE(v6[2 * v12 + 1]);
      result = a6(a1: (unsigned int)v13, a2, a3: &v6[2 * v9], a4: v13, a5: v11, a6: LOBYTE(v6[2 * a1 + 1]));
      if ( *(int *)(v7 + 16) <= 0 )
        return sub_277F280(a1: v16, a2: v17, a3: v15);
      return result;
    case 0x416FB5:
      v11 = SLOBYTE(v6[2 * v10 + 1]);
      goto LABEL_9;
    case 0x416FCB:
      v11 = SLOWORD(v6[2 * v10 + 1]);
      goto LABEL_9;
    case 0x416FE1:
      v11 = LOWORD(v6[2 * v10 + 1]);
      goto LABEL_9;
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
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_27544A0();
  }
}
