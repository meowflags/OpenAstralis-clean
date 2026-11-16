// sub_181E8CFE0
// rva 0x01e8cfe0  size 725  section .text  group text
// window base 0x181e8cfe0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_181E8CFE0(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, int a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 result; // rax
  __int64 v17; // rdi
  __int64 v18; // rsi
  int v19; // r8d
  int v20; // r9d
  BOOL v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rsi
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // r8
  char v44; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v45; // [rsp+Ch] [rbp-1Ch]
  __int64 v46; // [rsp+10h] [rbp-18h]
  unsigned __int64 v47; // [rsp+18h] [rbp-10h]
  __int64 v48; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v44 <= *(_QWORD *)(v8 + 8) )
  {
    v48 = a5;
    sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v44);
    goto LABEL_21;
  }
  v9 = *(unsigned int *)(v7 + 376654972);
  if ( (_DWORD)v9 != 0 && *(_DWORD *)(v7 + 8 * v9) >> 3 == 5057809 )
  {
    v10 = *(_QWORD *)(v7 + 376652832);
    v11 = *(unsigned int *)(v7 + 376654972);
    if ( (_DWORD)v11 != 0 )
    {
      v12 = *(_DWORD *)(v7 + 8 * v11) >> 3;
      v13 = *(_DWORD *)(v7 + 8 * v12 + 44) & (0x207u >> HIBYTE(*(_DWORD *)(v7 + 8 * v12 + 44)));
      if ( (unsigned __int16)*(_DWORD *)(v7 + 8LL * *(unsigned int *)(v7 + 8 * v12 + 20) + 4 * v13 + 12) == 519 )
      {
        v14 = *(unsigned int *)(v7 + 8 * v11 + 8);
        v15 = v7 + 8 * v11;
        if ( (_DWORD)v14 != 0 )
        {
          v46 = v15;
          v47 = v10;
          v48 = a5;
          result = sub_181E9F560(a1, a2: v13, a3: v7 + 8 * v14);
          v21 = v47 > result;
          goto LABEL_8;
        }
        goto LABEL_24;
      }
    }
    else
    {
      v48 = a5;
      v10 = MEMORY[0x18276EFE0](a1, a2, a3: v11, a4: v10);
    }
    v48 = a5;
    v10 = MEMORY[0x18276EDE0](a1, a2: v13, a3: v11, a4: v10);
LABEL_24:
    v48 = a5;
    MEMORY[0x18276EFE0](a1, a2: v13, a3: v15, a4: v10);
    goto LABEL_25;
  }
  v48 = a5;
  if ( (_DWORD)v9 == 0 )
  {
LABEL_25:
    MEMORY[0x18276EFE0]();
    goto LABEL_26;
  }
  v22 = *(_DWORD *)(v7 + 8 * v9) >> 3;
  if ( (unsigned __int16)*(_DWORD *)(v7
                                   + 8LL * *(unsigned int *)(v7 + 8 * v22 + 20)
                                   + 4LL
                                   * (*(_DWORD *)(v7 + 8 * v22 + 44) & (0x207u >> HIBYTE(*(_DWORD *)(v7 + 8 * v22 + 44))))
                                   + 12) != 519 )
  {
LABEL_26:
    MEMORY[0x18276EDE0]();
    goto LABEL_27;
  }
  v46 = v7 + 376654936;
  v23 = *(_DWORD *)(v7 + 8 * v9) >> 3;
  v24 = v7 + 8LL * *(unsigned int *)(v7 + 8 * v23 + 20);
  v25 = *(_DWORD *)(v7 + 8 * v23 + 44) & (0x207u >> HIBYTE(*(_DWORD *)(v7 + 8 * v23 + 44)));
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v6
                                                              + *(_QWORD *)(v7
                                                                          + 8 * v23
                                                                          + HIWORD(*(_DWORD *)(v24 + 4 * v25 + 12))
                                                                          + 176)))(
             a1: v25,
             a2: v24,
             a3: v7 + 8 * v9);
  if ( (_DWORD)result != 0 )
  {
    result = sub_181E8B260(a1: v27, a2: v28, a3: v46, a4: v26, a5: v7 + 376653240, a6: 0);
    if ( (_DWORD)result != 0 )
    {
      v29 = *(unsigned int *)(v7 + 376654972);
      v46 = v7 + 8 * v29;
      v45 = v29;
      v30 = sub_181E98320(a1: v17, a2: v18, a3: v7 + 376652592);
      v33 = v45;
      if ( v45 == 0 )
      {
LABEL_27:
        MEMORY[0x18276EFE0]();
        goto LABEL_28;
      }
      v34 = *(_DWORD *)(v7 + 8LL * v45) >> 3;
      v35 = (unsigned __int16)*(_DWORD *)(v7
                                        + 8LL * *(unsigned int *)(v7 + 8 * v34 + 20)
                                        + 4LL
                                        * (*(_DWORD *)(v7 + 8 * v34 + 44)
                                         & (0x207u >> HIBYTE(*(_DWORD *)(v7 + 8 * v34 + 44))))
                                        + 12);
      if ( (_DWORD)v35 != 519 )
      {
LABEL_28:
        MEMORY[0x18276EDE0](a1: v31, a2: v32, a3: v33, a4: v35, a5: v48);
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
        return sub_181E8D2C0(a1: v41, a2: v42, a3: v39, a4: v40, a5: v43);
      }
      v36 = *(_DWORD *)(v7 + 8LL * v45) >> 3;
      v37 = *(_DWORD *)(v7 + 8 * v36 + 44) & (0x207u >> HIBYTE(*(_DWORD *)(v7 + 8 * v36 + 44)));
      v38 = *(_QWORD *)(v7
                      + 8 * v36
                      + HIWORD(*(_DWORD *)(v7 + 8LL * *(unsigned int *)(v7 + 8 * v36 + 20) + 4 * v37 + 12))
                      + 136);
      result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64))(v6 + v38))(
                 a1: v31,
                 a2: v37,
                 a3: v46,
                 a4: v38,
                 a5: v30);
      v21 = result;
    }
    else
    {
      v21 = false;
    }
LABEL_8:
    if ( !v21 )
      goto LABEL_9;
LABEL_21:
    sub_181EBCD80(a1: v17, a2: v18, a3: v7 + 376656008, a4: v21, a5: v19, a6: v20, a7: v44);
  }
LABEL_9:
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
