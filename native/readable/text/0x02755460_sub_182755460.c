// sub_2755460
// rva 0x02755460  size 262  section .text  group text
// window base 0x182755460: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2755460(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 (__fastcall *a6)(__int64, __int64, __int64, __int64, _DWORD *))
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
    goto LABEL_19;
  if ( a5 == v6 )
    goto LABEL_18;
  if ( a5[2] != 2 )
    goto LABEL_18;
  v8 = (unsigned int)a5[3];
  if ( (_DWORD)v8 == 0 )
    goto LABEL_18;
  v9 = v6[2 * v8] >> 3;
  switch ( v9 )
  {
    case 4260808:
      v10 = (unsigned int)v6[2 * v8 + 1];
LABEL_7:
      v11 = (unsigned int)v10;
      v12 = (unsigned int)a5[4];
      if ( (_DWORD)v12 != 0 )
      {
        v13 = v6[2 * v12] >> 3;
        a2 = v6[2 * v13 + 11] & (0x634u >> HIBYTE(v6[2 * v13 + 11]));
        v10 = (unsigned __int16)v6[2 * (unsigned int)v6[2 * v13 + 5] + 3 + a2];
        if ( (_DWORD)v10 != 1588 )
          goto LABEL_18;
      }
      result = a6(a1, a2, a3: v11, a4: v10, a5: &v6[2 * v12]);
      if ( *(int *)(v7 + 16) <= 0 )
        return sub_277F280(a1: v16, a2: v17, a3: v15);
      return result;
    case 4288437:
      v10 = (unsigned int)SLOBYTE(v6[2 * v8 + 1]);
      goto LABEL_7;
    case 4288459:
      v10 = (unsigned int)SLOWORD(v6[2 * v8 + 1]);
      goto LABEL_7;
    case 4288481:
      v10 = LOWORD(v6[2 * v8 + 1]);
      goto LABEL_7;
    default:
LABEL_18:
      sub_2757000(a1, a2, a3: a5);
LABEL_19:
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
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_2755580();
  }
}
