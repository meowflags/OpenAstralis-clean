// sub_184F3B540
// rva 0x04f3b540  size 892  section .text  group text
// window base 0x184f3b540: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_184F3B540(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  void (__fastcall *v16)(__int64, __int64, _DWORD *, _QWORD, __int64, _QWORD); // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rdi
  __int64 v34; // rsi
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rbx
  char v37; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v38; // [rsp+8h] [rbp-30h]
  _DWORD *i; // [rsp+10h] [rbp-28h]
  __int64 v40; // [rsp+18h] [rbp-20h]
  _DWORD *v41; // [rsp+20h] [rbp-18h]
  int v42; // [rsp+28h] [rbp-10h]
  unsigned int v43; // [rsp+2Ch] [rbp-Ch]
  __int64 v44; // [rsp+30h] [rbp-8h]

  v41 = (_DWORD *)a3;
  if ( (unsigned __int64)&v37 <= *(_QWORD *)(v9 + 8) )
  {
    v43 = a6;
    v42 = a5;
    MEMORY[0x181EB84E0]();
    goto LABEL_14;
  }
  if ( a6 != 0 )
  {
    if ( a6 >= 0 )
    {
      v43 = a6;
      v42 = a5;
      if ( (a5 & 0xFFFF0000) != 0 )
      {
        v10 = sub_184F4B200(a1, a2, a3: a5, a4, a5, a6, a7: v37);
        v11 = *(unsigned int *)(v10 + 8);
        v38 = (_DWORD *)v10;
        v15 = MEMORY[0x18550B580](a1: v13, a2: v14, a3: v10, a4: v12, a5: 0, a6: v11);
        v16 = (void (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64, _QWORD))(v7
                                                                                       + *(_QWORD *)(v8 + 8LL * (*v41 >> 3) + 536));
        v16(a1: v17, a2: v18, a3: v41, a4: v16, a5: v15, a6: v43);
      }
      else
      {
        sub_184F3B300(a1, a2, a3, a4, (unsigned __int16)a5, a6, a7: v37);
      }
      if ( *(int *)(v9 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return v41;
    }
LABEL_14:
    v43 = a6;
    v42 = a5;
    v20 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v20 + 24) > *(_QWORD *)(v9 + 32) )
    {
      v20 = MEMORY[0x181EAA920](a1, a2, a3: 34085680);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v20 + 24;
      *(_DWORD *)v20 = 34085680;
      *(_DWORD *)(v20 + 4) = 0;
      *(_QWORD *)(v20 + 8) = 0;
      *(_QWORD *)(v20 + 16) = 0;
    }
    v40 = v20;
    v21 = *(_QWORD *)(v9 + 40);
    v22 = 34082368;
    if ( (unsigned __int64)(v21 + 32) > *(_QWORD *)(v9 + 32) )
    {
      v21 = MEMORY[0x181EAA840](a1, a2, a3: 34082368, a4: 34082368, a5: 16);
      v20 = v40;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v21 + 32;
      *(_QWORD *)v21 = 34082368;
      *(_DWORD *)(v21 + 8) = 16;
      *(_DWORD *)(v21 + 12) = 0;
      *(_QWORD *)(v21 + 16) = 0;
      *(_QWORD *)(v21 + 24) = 0;
    }
    *(_DWORD *)(v20 + 4) = (unsigned __int64)(v21 - v8) >> 3;
    if ( (*(_DWORD *)v20 & 2) != 0 )
    {
      v22 = (v20 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v20 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v20 - v22) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v20 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(v20 - v22) >> 9) + 0x38) = 0;
    }
    sub_184F36F80(a1, a2, a3: v20, a4: v22, a5: v8 + 362218232);
    sub_184F36640(a1: v24, a2: v25, a3: v40, a4: v23, a5: v43);
    v29 = v40;
    if ( *(_DWORD *)(v40 + 8) == 0 )
      goto LABEL_27;
    v30 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v30 + 24) > *(_QWORD *)(v9 + 32) )
    {
      v30 = MEMORY[0x181EAA920](a1: v27, a2: v28, a3: 34082680);
      v31 = v40;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v30 + 24;
      *(_DWORD *)v30 = 34082680;
      *(_DWORD *)(v30 + 4) = 0;
      *(_QWORD *)(v30 + 8) = 0;
      *(_QWORD *)(v30 + 16) = 0;
      v31 = v29;
    }
    v38 = (_DWORD *)v30;
    MEMORY[0x184FE9280](a1: v27, a2: v28, a3: v30, a4: v26, a5: v31, a6: v8);
    v44 = v7;
    for ( i = v38; ; i = (_DWORD *)(v8 + 373281248) )
    {
      v32 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v32 + 40) > *(_QWORD *)(v9 + 32) )
      {
        v32 = MEMORY[0x181EAA920](a1: v27, a2: v28, a3: 34081944);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v32 + 40;
        *(_DWORD *)v32 = 34081944;
        *(_DWORD *)(v32 + 4) = 0;
        *(_QWORD *)(v32 + 8) = 0;
        *(_QWORD *)(v32 + 16) = 0;
        *(_QWORD *)(v32 + 24) = 0;
        *(_QWORD *)(v32 + 32) = 0;
      }
      *(_DWORD *)(v32 + 20) = 46923644;
      *(_DWORD *)(v32 + 16) = *(_DWORD *)(v8 + 374343896);
      *(_DWORD *)(v32 + 12) = (unsigned __int64)(v32 - v8) >> 3;
      v38 = (_DWORD *)v32;
      MEMORY[0x18503B9A0](a1: v27, a2: v28, a3: v32, a4: v26, a5: 0);
      v35 = (unsigned __int64)v38;
      v38[2] = ((unsigned __int64)i - v8) >> 3;
      if ( (*(_DWORD *)v35 & 2) != 0 )
      {
        v36 = (v35 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v35 & 0xFFFFFFFFFFF80000LL) + ((v35 - v36) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v35 & 0xFFFFFFFFFFF80000LL) + ((v35 - v36) >> 9) + 0x38) = 0;
      }
      MEMORY[0x182769900](a1: v33, a2: v34, a3: v35, a4: v35, a5: &a7);
LABEL_27:
      ;
    }
  }
  v43 = 0;
  v42 = a5;
  if ( *(int *)(v9 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v41;
}
