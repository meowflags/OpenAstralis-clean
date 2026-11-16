// sub_5056C60
// rva 0x05056c60  size 905  section .text  group text
// window base 0x185056c60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5056C60(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // [rsp+0h] [rbp-18h] BYREF
  __int64 v24; // [rsp+8h] [rbp-10h]
  _DWORD *v25; // [rsp+10h] [rbp-8h]

  v25 = a3;
  v24 = a5;
  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
LABEL_34:
    sub_2770780();
LABEL_35:
    sub_2770780();
    goto LABEL_36;
  }
  v8 = (unsigned __int16)*(_DWORD *)(v6
                                   + 8LL * *(unsigned int *)(v6 + 8LL * (*a3 >> 3) + 20)
                                   + 4LL
                                   * (*(_DWORD *)(v6 + 8LL * (*a3 >> 3) + 44)
                                    & (0x1E9Du >> HIBYTE(*(_DWORD *)(v6 + 8LL * (*a3 >> 3) + 44))))
                                   + 12);
  if ( a5 == v6 || v6 + 377215136 == a5 )
  {
    if ( v8 == 7837 )
    {
      v9 = *a3 >> 3;
      v10 = *(_DWORD *)(v6 + 8 * v9 + 44) & (0x1E9Du >> HIBYTE(*(_DWORD *)(v6 + 8 * v9 + 44)));
      result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v5
                                                                             + *(_QWORD *)(v6
                                                                                         + 8 * v9
                                                                                         + HIWORD(*(_DWORD *)(v6 + 8LL * *(unsigned int *)(v6 + 8 * v9 + 20) + 4 * v10 + 12))
                                                                                         + 16)))(
                 a1,
                 a2: v10,
                 a3,
                 a4: a3);
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return sub_277F280();
    }
    goto LABEL_34;
  }
  v12 = *(_DWORD *)a5 >> 3;
  if ( *(__int16 *)(v6 + 8 * v12 + 62) < 2 || *(_DWORD *)(v6 + 8LL * *(unsigned int *)(v6 + 8 * v12 + 16) + 16) != 26724 )
  {
LABEL_8:
    if ( v8 == 7837 )
    {
      v13 = *v25 >> 3;
      result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, __int64))(v5
                                                                                      + *(_QWORD *)(v6
                                                                                                  + 8 * v13
                                                                                                  + HIWORD(*(_DWORD *)(v6 + 8LL * *(unsigned int *)(v6 + 8 * v13 + 20) + 4LL * (*(_DWORD *)(v6 + 8 * v13 + 44) & (0x1E9Du >> HIBYTE(*(_DWORD *)(v6 + 8 * v13 + 44)))) + 12))
                                                                                                  + 1288)))(
                 a1,
                 a2,
                 a3: v25,
                 a4: v25,
                 a5: v24);
      if ( *(int *)(v7 + 16) > 0 )
        return result;
      return sub_277F280();
    }
    goto LABEL_35;
  }
  v14 = *(_DWORD *)a5 >> 3;
  switch ( v14 )
  {
    case 4260452:
      if ( v8 != 7837 )
      {
LABEL_37:
        sub_2770780();
        goto LABEL_38;
      }
      v17 = *v25 >> 3;
      v18 = *(_DWORD *)(v6 + 8 * v17 + 44) & (0x1E9Du >> HIBYTE(*(_DWORD *)(v6 + 8 * v17 + 44)));
      result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _QWORD))(v5
                                                                                     + *(_QWORD *)(v6
                                                                                                 + 8 * v17
                                                                                                 + HIWORD(*(_DWORD *)(v6 + 8LL * *(unsigned int *)(v6 + 8 * v17 + 20) + 4 * v18 + 12))
                                                                                                 + 1352)))(
                 a1,
                 a2: v18,
                 a3: v25,
                 a4: v25,
                 a5: *(_QWORD *)(a5 + 8));
      if ( *(int *)(v7 + 16) <= 0 )
        return sub_277F280();
      break;
    case 4260808:
      if ( v8 != 7837 )
      {
LABEL_36:
        sub_2770780();
        goto LABEL_37;
      }
      v15 = *v25 >> 3;
      v16 = *(_DWORD *)(v6 + 8 * v15 + 44) & (0x1E9Du >> HIBYTE(*(_DWORD *)(v6 + 8 * v15 + 44)));
      result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, _QWORD))(v5
                                                                                     + *(_QWORD *)(v6
                                                                                                 + 8 * v15
                                                                                                 + HIWORD(*(_DWORD *)(v6 + 8LL * *(unsigned int *)(v6 + 8 * v15 + 20) + 4 * v16 + 12))
                                                                                                 + 1336)))(
                 a1,
                 a2: v16,
                 a3: v25,
                 a4: v25,
                 a5: *(unsigned int *)(a5 + 4));
      if ( *(int *)(v7 + 16) <= 0 )
        return sub_277F280();
      break;
    case 4260831:
      if ( v8 != 7837 )
      {
LABEL_39:
        sub_2770780(a1, a2, a3: v25);
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
        return sub_5057000();
      }
      v21 = *v25 >> 3;
      v22 = *(_DWORD *)(v6 + 8 * v21 + 44) & (0x1E9Du >> HIBYTE(*(_DWORD *)(v6 + 8 * v21 + 44)));
      result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, double))(v5
                                                                                     + *(_QWORD *)(v6
                                                                                                 + 8 * v21
                                                                                                 + HIWORD(*(_DWORD *)(v6 + 8LL * *(unsigned int *)(v6 + 8 * v21 + 20) + 4 * v22 + 12))
                                                                                                 + 1360)))(
                 a1,
                 a2: v22,
                 a3: v25,
                 a4: v25,
                 a5: *(double *)(a5 + 8));
      if ( *(int *)(v7 + 16) <= 0 )
        return sub_277F280();
      break;
    case 4279946:
      if ( v8 != 7837 )
      {
LABEL_38:
        sub_2770780();
        goto LABEL_39;
      }
      v19 = *v25 >> 3;
      v20 = *(_DWORD *)(v6 + 8 * v19 + 44) & (0x1E9Du >> HIBYTE(*(_DWORD *)(v6 + 8 * v19 + 44)));
      result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, float))(v5
                                                                                    + *(_QWORD *)(v6
                                                                                                + 8 * v19
                                                                                                + HIWORD(*(_DWORD *)(v6 + 8LL * *(unsigned int *)(v6 + 8 * v19 + 20) + 4 * v20 + 12))
                                                                                                + 1344)))(
                 a1,
                 a2: v20,
                 a3: v25,
                 a4: v25,
                 a5: *(float *)(a5 + 4));
      if ( *(int *)(v7 + 16) <= 0 )
        return sub_277F280();
      break;
    default:
      goto LABEL_8;
  }
  return result;
}
