// sub_181E64660
// rva 0x01e64660  size 406  section .text  group text
// window base 0x181e64660: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E64660(int a1, __int64 a2, _DWORD *a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  int v10; // ebx
  unsigned int v11; // ecx
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  int v16; // r9d
  unsigned int v17; // eax
  __int64 (__fastcall *v18)(_QWORD, _QWORD, _DWORD *); // rsi
  unsigned int v19; // eax
  __int64 v20; // rdi
  __int64 v21; // rsi
  int v22; // r9d
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // [rsp+0h] [rbp-38h] BYREF
  __int64 v27; // [rsp+8h] [rbp-30h]
  __int64 v28; // [rsp+10h] [rbp-28h]
  _DWORD *v29; // [rsp+18h] [rbp-20h]
  unsigned int v30; // [rsp+20h] [rbp-18h]
  unsigned int v31; // [rsp+24h] [rbp-14h]
  unsigned int v32; // [rsp+28h] [rbp-10h]
  int v33; // [rsp+2Ch] [rbp-Ch]
  int v34; // [rsp+30h] [rbp-8h]
  int v35; // [rsp+34h] [rbp-4h]

  v29 = a3;
  v35 = a5;
  v34 = a6;
  v33 = a1;
  if ( (unsigned __int64)&v26 <= *(_QWORD *)(v8 + 8) )
  {
    LODWORD(result) = MEMORY[0x181EB84E0]();
    goto LABEL_13;
  }
  v9 = *a3 >> 3;
  v10 = *(_DWORD *)(v7 + 8 * v9 + 44);
  v28 = v7 + 8LL * *(unsigned int *)(v7 + 8 * v9 + 20);
  v32 = v10 & (0x749u >> SHIBYTE(v10));
  v11 = *(_DWORD *)(v28 + 4LL * v32 + 12);
  v27 = v7 + 8 * v9;
  result = ((unsigned int (*)(void))(v6 + *(_QWORD *)(v27 + HIWORD(v11) + 40)))();
  if ( (_DWORD)result == -1 )
  {
    v17 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v6
                                                              + *(_QWORD *)(v27
                                                                          + HIWORD(*(_DWORD *)(v28 + 4LL * v32 + 12))
                                                                          + 40)))(
            a1: v14,
            a2: v15,
            a3: v29);
    v18 = (__int64 (__fastcall *)(_QWORD, _QWORD, _DWORD *))(v6
                                                           + *(_QWORD *)(v27
                                                                       + HIWORD(*(_DWORD *)(v28 + 4LL * v32 + 12))
                                                                       + 40));
    v31 = v17;
    v19 = v18(a1: v17, a2: v18, a3: v29);
    v23 = v19;
    v30 = v19;
    if ( v35 == 0 )
      v19 = v31;
    while ( v19 == -1 )
    {
      result = ((unsigned int (__fastcall *)(__int64, __int64, _DWORD *))(v6
                                                                        + *(_QWORD *)(v27
                                                                                    + HIWORD(*(_DWORD *)(v28 + 4LL * v32 + 12))
                                                                                    + 40)))(
                 a1: v20,
                 a2: v21,
                 a3: v29);
      if ( (int)result >= 0 )
        goto LABEL_4;
      v32 = result;
      MEMORY[0x1828C1C40](a1: v24, a2: v25, a3: v7 + 369817944);
      v19 = v31;
    }
    goto LABEL_14;
  }
  if ( (int)result < -1 )
  {
LABEL_13:
    v19 = sub_181E60C20(
            a1: v14,
            a2: v15,
            a3: result,
            a4: v13,
            a5: v33,
            a6: v16,
            a7: v26,
            a8: v27,
            a9: v28,
            a10: (__int64)v29,
            a11: v30,
            a12: v32);
LABEL_14:
    sub_181E60C20(
      a1: v20,
      a2: v21,
      a3: v19,
      a4: v23,
      a5: v33,
      a6: v22,
      a7: v26,
      a8: v27,
      a9: v28,
      a10: (__int64)v29,
      a11: v30,
      a12: v19);
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
    return sub_181E64800();
  }
LABEL_4:
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
