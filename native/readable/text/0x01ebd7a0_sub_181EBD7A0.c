// sub_1EBD7A0
// rva 0x01ebd7a0  size 586  section .text  group text
// window base 0x181ebd7a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_1EBD7A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rdx
  _DWORD *result; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  _DWORD *v14; // rbp
  __int64 v15; // rsi
  __int64 v16; // rcx
  void (__fastcall *v17)(__int64, __int64, _DWORD *); // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  _DWORD *v23; // rbp
  __int64 v24; // rsi
  __int64 v25; // rcx
  void (__fastcall *v26)(__int64, __int64, _DWORD *); // rcx
  __int64 v27; // rdx
  __int64 v28; // rdi
  char v29; // [rsp+0h] [rbp-28h] BYREF
  __int64 i; // [rsp+10h] [rbp-18h]
  __int64 v31; // [rsp+18h] [rbp-10h]
  __int64 v32; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v29 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v29);
    goto LABEL_18;
  }
  v9 = (unsigned int)v7[94156133];
  if ( (_DWORD)v9 == 0 )
  {
LABEL_18:
    sub_2771080();
    goto LABEL_19;
  }
  v10 = (unsigned int)v7[2 * v9 + 2];
  if ( (_DWORD)v10 == 0 )
  {
LABEL_19:
    sub_2771080();
    goto LABEL_20;
  }
  result = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v6
                                                                         + *(_QWORD *)&v7[2 * (v7[2 * v10] >> 3) + 32]))(
                       a1,
                       a2,
                       a3: &v7[2 * v10]);
  if ( result != v7 )
  {
    v13 = *result >> 3;
    v14 = &v7[2 * v7[2 * v13 + 5]];
    v15 = v7[2 * v13 + 11] & (0x5AEu >> HIBYTE(v7[2 * v13 + 11]));
    v16 = (unsigned __int16)v14[v15 + 3];
    if ( (_DWORD)v16 != 1454 )
      goto LABEL_21;
    v17 = (void (__fastcall *)(__int64, __int64, _DWORD *))(v6 + *(_QWORD *)((char *)&v7[2 * v13] + HIWORD(v14[v15 + 3])));
    v31 = (__int64)result;
    v17(a1: v12, a2: v15, a3: result);
    v32 = v6;
    for ( i = v31; ; i = sub_276A220(a1: v12, a2: v15, a3: result, a4: v16, a5: v7 + 10116658) )
    {
      v20 = (unsigned int)v7[94156133];
      if ( (_DWORD)v20 != 0 )
        break;
LABEL_20:
      result = (_DWORD *)sub_2771080();
LABEL_21:
      v31 = (__int64)result;
    }
    v21 = (unsigned int)v7[2 * v20 + 2];
    if ( (_DWORD)v21 == 0 )
    {
      v31 = sub_2771080(a1: v18, a2: v19, a3: v31);
      goto LABEL_12;
    }
    while ( 1 )
    {
      result = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v6
                                                                             + *(_QWORD *)&v7[2 * (v7[2 * v21] >> 3)
                                                                                            + 32]))(
                           a1: v18,
                           a2: v19,
                           a3: &v7[2 * v21]);
      if ( result == v7 )
        break;
      v22 = *result >> 3;
      v23 = &v7[2 * v7[2 * v22 + 5]];
      v24 = v7[2 * v22 + 11] & (0x5AEu >> HIBYTE(v7[2 * v22 + 11]));
      v25 = (unsigned __int16)v23[v24 + 3];
      if ( (_DWORD)v25 == 1454 )
      {
        v26 = (void (__fastcall *)(__int64, __int64, _DWORD *))(v6
                                                              + *(_QWORD *)((char *)&v7[2 * v22] + HIWORD(v23[v24 + 3])));
        i = (__int64)result;
        v26(a1: v28, a2: v24, a3: result);
        v32 = v6;
        v31 = i;
      }
      else
      {
        i = (__int64)result;
        v31 = sub_276A220(a1: v28, a2: v24, a3: result, a4: v25, a5: v7 + 10116658);
      }
LABEL_12:
      v27 = (unsigned int)v7[94156133];
      if ( (_DWORD)v27 == 0 )
      {
        sub_2771080();
LABEL_25:
        sub_2771080(a1: v18, a2: v19, a3: v21, a4: i);
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
        return (_DWORD *)sub_1EBDA00();
      }
      v21 = (unsigned int)v7[2 * v27 + 2];
      if ( (_DWORD)v21 == 0 )
        goto LABEL_25;
    }
  }
  if ( *(int *)(v8 + 16) <= 0 )
    return (_DWORD *)sub_277F280();
  return result;
}
