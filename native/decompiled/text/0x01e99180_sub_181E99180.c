// sub_181E99180
// rva 0x01e99180  size 890  section .text  group text
// window base 0x181e99180: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E99180(__int64 a1, __int64 a2, int a3, int a4, _QWORD *a5, unsigned int a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdi
  unsigned __int64 v16; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  _QWORD *v24; // r8
  __int64 v25; // rax
  char *v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // rbx
  char *v30; // rbx
  __int64 v31; // rbp
  __int64 v32; // rbp
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 result; // rax
  __int64 v37; // rdi
  __int64 v38; // rsi
  int v39; // [rsp+0h] [rbp-48h] BYREF
  __int64 v40; // [rsp+10h] [rbp-38h]
  char *v41; // [rsp+18h] [rbp-30h]
  unsigned __int64 v42; // [rsp+20h] [rbp-28h]
  unsigned __int64 v43; // [rsp+28h] [rbp-20h]
  unsigned __int64 v44; // [rsp+30h] [rbp-18h]
  unsigned int v45; // [rsp+3Ch] [rbp-Ch]
  _QWORD *v46; // [rsp+40h] [rbp-8h]

  v46 = a5;
  if ( (unsigned __int64)&v39 <= *(_QWORD *)(v8 + 8) )
  {
    v45 = a6;
    sub_181EB83C0(a1, a2, a3, a4, (_DWORD)a5, a6, a7: v39);
    goto LABEL_44;
  }
  v9 = *(unsigned int *)(v7 + 376654972);
  v10 = *(_QWORD *)(v7 + 376656136) << 19;
  if ( (_DWORD)v9 == 0 )
  {
LABEL_44:
    v45 = a6;
    MEMORY[0x18276EFE0](a1, a2, a3: v9, a4: v10);
    goto LABEL_45;
  }
  v44 = *(_QWORD *)(v7 + 376656136) << 19;
  v40 = v7 + 376655336;
  v11 = *(_DWORD *)(v7 + 8 * v9) >> 3;
  v12 = *(_DWORD *)(v7 + 8 * v11 + 44) & (0x207u >> HIBYTE(*(_DWORD *)(v7 + 8 * v11 + 44)));
  if ( (unsigned __int16)*(_DWORD *)(v7 + 8LL * *(unsigned int *)(v7 + 8 * v11 + 20) + 4 * v12 + 12) != 519 )
  {
LABEL_45:
    v45 = a6;
    MEMORY[0x18276EDE0](a1, a2: v12, a3: v9, a4: v44);
    goto LABEL_46;
  }
  v45 = a6;
  v13 = *(_DWORD *)(v7 + 8 * v9) >> 3;
  v14 = *(unsigned int *)(v7 + 8 * v13 + 44);
  v15 = (unsigned int)v14 & (0x207u >> HIBYTE(*(_DWORD *)(v7 + 8 * v13 + 44)));
  v16 = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v6
                                                           + *(_QWORD *)(v7
                                                                       + 8 * v13
                                                                       + HIWORD(*(_DWORD *)(v7
                                                                                          + 8LL
                                                                                          * *(unsigned int *)(v7 + 8 * v13 + 20)
                                                                                          + 4 * v15
                                                                                          + 12))
                                                                       + 48)))(
          a1: v15,
          a2: v14,
          a3: v7 + 8 * v9);
  v19 = *(unsigned int *)(v7 + 376656632);
  if ( (_DWORD)v19 == 47076562 )
    v20 = v7 + 52423880;
  else
    v20 = v7 + 8 * v19;
  if ( v20 != v7 && *(_DWORD *)v20 >> 3 != 4260452 )
    goto LABEL_47;
  if ( v20 == v7 )
  {
LABEL_46:
    MEMORY[0x18276EFE0](a1: v17, a2: v18, a3: v20, a4: v44);
LABEL_47:
    MEMORY[0x18276EAE0](a1: v17, a2: v18, a3: v20, a4: v44, a5: v46, a6: v45);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_181E99500();
  }
  v21 = *(_QWORD *)(v20 + 8);
  if ( v21 != 0 )
  {
    if ( v21 < v16 )
      JUMPOUT(0x303D23290LL);
    v22 = v16;
  }
  else
  {
    v22 = v16;
  }
  if ( v22 > v44 )
  {
    v23 = (v22 - v44) >> 19;
    v43 = 0;
  }
  else
  {
    v43 = (v44 - v22) >> 19;
    v23 = 0;
  }
  v24 = v46;
  if ( v46 != nullptr )
  {
    if ( v23 != 0 )
    {
      v25 = v46[2];
      if ( v25 != 0 )
        v26 = (char *)v46 + v25;
      else
        v26 = nullptr;
      *v46 = 0x80000;
      v24[4] = 2112;
      *((_DWORD *)v24 + 10) = 0;
      v24[2] = 0;
      v24[3] = 0;
      v24[1] = *(_QWORD *)(v7 + 376654976);
      *((_DWORD *)v24 + 11) = 0;
      *((_BYTE *)v24 + 48) = 0;
      v27 = *(_QWORD *)(v7 + 376656656);
      if ( v27 != 0 )
        v28 = v27 - (_QWORD)v24;
      else
        v28 = 0;
      v24[2] = v28;
      *(_QWORD *)(v7 + 376656656) = v24;
      __faststorefence();
      __sync_fetch_and_add((volatile signed __int64 *)(v7 + 376656136), 1u);
      --v23;
      while ( v26 != nullptr && v23 != 0 )
      {
        v29 = *((_QWORD *)v26 + 2);
        if ( v29 != 0 )
          v30 = &v26[v29];
        else
          v30 = nullptr;
        *(_QWORD *)v26 = 0x80000;
        *((_QWORD *)v26 + 4) = 2112;
        *((_DWORD *)v26 + 10) = 0;
        *((_QWORD *)v26 + 2) = 0;
        *((_QWORD *)v26 + 3) = 0;
        *((_QWORD *)v26 + 1) = *(_QWORD *)(v7 + 376654976);
        *((_DWORD *)v26 + 11) = 0;
        v26[48] = 0;
        v31 = *(_QWORD *)(v7 + 376656656);
        if ( v31 != 0 )
          v32 = v31 - (_QWORD)v26;
        else
          v32 = 0;
        *((_QWORD *)v26 + 2) = v32;
        *(_QWORD *)(v7 + 376656656) = v26;
        __faststorefence();
        __sync_fetch_and_add((volatile signed __int64 *)(v7 + 376656136), 1u);
        v18 = v23 - 1;
        if ( *(int *)(v8 + 16) <= 0 )
        {
          MEMORY[0x18277F280](a1: v17, a2: v18);
          v23 = v18;
        }
        else
        {
          --v23;
        }
        v26 = v30;
      }
    }
    else
    {
      v26 = (char *)v46;
    }
  }
  else
  {
    v26 = nullptr;
  }
  v42 = v23;
  v41 = v26;
  sub_181E99540(a1: v17, a2: v18, a3: v26);
  result = sub_181E996C0(a1: v34, a2: v35, a3: v40, a4: v33, a5: v43);
  if ( *(int *)(v8 + 16) <= 0 )
    return MEMORY[0x18277F280](a1: v37, a2: v38, a3: v42, a4: v43);
  return result;
}
