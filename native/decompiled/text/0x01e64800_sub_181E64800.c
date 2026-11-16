// sub_181E64800
// rva 0x01e64800  size 742  section .text  group text
// window base 0x181e64800: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E64800(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rbx
  __int64 v10; // rdx
  int v11; // r8d
  unsigned int v12; // r8d
  __int64 v13; // rcx
  __int64 (__fastcall *v14)(_QWORD, __int64, _DWORD *, __int64, __int64, __int64); // rdi
  __int64 result; // rax
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(_QWORD, __int64, _DWORD *, __int64, __int64, __int64); // rdi
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  _DWORD *v21; // r9
  __int64 v22; // rdx
  int v23; // r8d
  unsigned int v24; // r8d
  __int64 v25; // rcx
  void (__fastcall *v26)(__int64, _QWORD, _DWORD *, __int64, __int64, __int64); // rsi
  __int64 i; // rcx
  void (__fastcall *v28)(_QWORD, __int64, _DWORD *, __int64, __int64, __int64); // rdi
  __int64 v29; // rsi
  __int64 v30; // [rsp+0h] [rbp-38h] BYREF
  __int64 v31; // [rsp+8h] [rbp-30h]
  __int64 v32; // [rsp+10h] [rbp-28h]
  __int64 v33; // [rsp+18h] [rbp-20h]
  _DWORD *v34; // [rsp+20h] [rbp-18h]
  int v35; // [rsp+2Ch] [rbp-Ch]
  unsigned int v36; // [rsp+30h] [rbp-8h]
  int v37; // [rsp+34h] [rbp-4h]

  v34 = a6;
  if ( (unsigned __int64)&v30 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB83C0]();
    goto LABEL_21;
  }
  v9 = *(unsigned int *)(v7 + 376651016);
  if ( *(_BYTE *)(v7 + 376651020) == 0 )
  {
    v37 = *(_DWORD *)(v7 + 376651016);
    if ( (int)v9 < 1 )
    {
      i = 0;
    }
    else
    {
      v33 = v7 + 376612120;
      v22 = *a6 >> 3;
      v23 = *(_DWORD *)(v7 + 8 * v22 + 44);
      v32 = v7 + 8LL * *(unsigned int *)(v7 + 8 * v22 + 20);
      v36 = v23 & (0x1FFu >> SHIBYTE(v23));
      v24 = *(_DWORD *)(v32 + 4LL * v36 + 12);
      v25 = *(unsigned int *)(v7 + 376651044);
      v31 = v7 + 8 * v22;
      v26 = (void (__fastcall *)(__int64, _QWORD, _DWORD *, __int64, __int64, __int64))(v6
                                                                                      + *(_QWORD *)(v31 + HIWORD(v24)));
      v26(a1, a2: v26, a3: a6, a4: v7 + 8 * v25, a5: v7 + 376612120, a6: v7 + 8 * v25);
      for ( i = 1; ; i = (unsigned int)(v35 + 1) )
      {
        a3 = v31;
        result = v36;
        a6 = v34;
        if ( (int)i >= *(_DWORD *)(v7 + 376651016) )
          break;
        if ( (unsigned int)i >= 0x1E )
          goto LABEL_23;
        v28 = (void (__fastcall *)(_QWORD, __int64, _DWORD *, __int64, __int64, __int64))(v6
                                                                                        + *(_QWORD *)(v31 + HIWORD(*(_DWORD *)(v32 + 4LL * v36 + 12))));
        v29 = v7 + 8LL * *(unsigned int *)(v7 + 4 * i + 376651044);
        v35 = i;
        v28(a1: v28, a2: v29, a3: v34, a4: i, a5: v33, a6: v29);
      }
    }
    goto LABEL_14;
  }
  if ( (unsigned int)v9 >= 0x1E )
  {
LABEL_21:
    MEMORY[0x18276F0E0]();
    goto LABEL_22;
  }
  v32 = v7 + 376612120;
  v10 = *a6 >> 3;
  v11 = *(_DWORD *)(v7 + 8 * v10 + 44);
  v31 = v7 + 8LL * *(unsigned int *)(v7 + 8 * v10 + 20);
  v36 = v11 & (0x1FFu >> SHIBYTE(v11));
  v12 = *(_DWORD *)(v31 + 4LL * v36 + 12);
  v13 = *(unsigned int *)(v7 + 4 * v9 + 376651044);
  v33 = v7 + 8 * v10;
  v14 = (__int64 (__fastcall *)(_QWORD, __int64, _DWORD *, __int64, __int64, __int64))(v6
                                                                                     + *(_QWORD *)(v33 + HIWORD(v12)));
  v37 = v9;
  result = v14(a1: v14, a2: v31, a3: a6, a4: v7 + 8 * v13, a5: v7 + 376612120, a6: v7 + 8 * v13);
  a3 = 2 * ((v37 + 1) / 0x1Eu);
  a5 = 30 * ((v37 + 1) / 0x1Eu);
  v16 = (v37 + 1) % 0x1Eu;
  if ( (_DWORD)v16 == *(_DWORD *)(v7 + 376651016) )
  {
    i = (unsigned int)v16;
LABEL_14:
    if ( *(int *)(v8 + 16) <= 0 )
      return MEMORY[0x18277F280](a1, a2, a3, a4: i, a5, a6);
    return result;
  }
  while ( 1 )
  {
    v19 = v33;
    v20 = v31;
    v21 = v34;
    if ( (unsigned int)v16 >= 0x1E )
      break;
    v17 = (__int64 (__fastcall *)(_QWORD, __int64, _DWORD *, __int64, __int64, __int64))(v6
                                                                                       + *(_QWORD *)(v33 + HIWORD(*(_DWORD *)(v31 + 4LL * v36 + 12))));
    v18 = v7 + 8LL * *(unsigned int *)(v7 + 4 * v16 + 376651044);
    v37 = v16;
    result = v17(a1: v17, a2: v18, a3: v34, a4: v31, a5: v32, a6: v18);
    a3 = 30 * ((v37 + 1) / 0x1Eu);
    v16 = (v37 + 1) % 0x1Eu;
    if ( (_DWORD)v16 == *(_DWORD *)(v7 + 376651016) )
    {
      i = (unsigned int)v16;
      goto LABEL_14;
    }
  }
LABEL_22:
  MEMORY[0x18276F0E0](a1, a2, a3: v19, a4: v20, a5, a6: v21);
LABEL_23:
  MEMORY[0x18276F0E0](a1, a2, a3, a4: i, a5, a6);
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
  return sub_181E64B00();
}
