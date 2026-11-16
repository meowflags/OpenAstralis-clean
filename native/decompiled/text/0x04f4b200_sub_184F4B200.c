// sub_184F4B200
// rva 0x04f4b200  size 773  section .text  group text
// window base 0x184f4b200: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F4B200(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 i; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rsi
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rbx
  __int64 v25; // [rsp+0h] [rbp-28h] BYREF
  __int64 v26; // [rsp+10h] [rbp-18h]
  _DWORD *v27; // [rsp+18h] [rbp-10h]
  unsigned int v28; // [rsp+24h] [rbp-4h]

  v28 = a3;
  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_17;
  }
  if ( (a3 & 0xFFFF0000) != 0 )
  {
    if ( HIWORD(a3) < 0x11u )
    {
      v9 = *(_QWORD *)(v8 + 40);
      v10 = v9 + 16;
      if ( (unsigned __int64)(v9 + 16) > *(_QWORD *)(v8 + 32) )
      {
        v9 = MEMORY[0x181EAA840](a1, a2, a3: 34089376, a4: v10, a5: 2);
        a3 = v28;
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v10;
        *(_QWORD *)v9 = 34089376;
        *(_DWORD *)(v9 + 8) = 2;
        *(_DWORD *)(v9 + 12) = 0;
      }
      *(_WORD *)(v9 + 14) = (a3 & 0x3FF) - 9216;
      *(_WORD *)(v9 + 12) = (a3 >> 10) - 10304;
      if ( *(int *)(v8 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return v9;
    }
LABEL_17:
    v14 = a3 + 128;
    if ( (unsigned int)v14 >= 0x100 )
      goto LABEL_25;
    for ( i = v7 + 8LL * *(unsigned int *)(v7 + 4 * v14 + 376353204); ; *(_DWORD *)(i + 4) = a3 )
    {
      v16 = *(_QWORD *)(v8 + 40);
      v17 = v16 + 24;
      if ( (unsigned __int64)(v16 + 24) > *(_QWORD *)(v8 + 32) )
      {
        v27 = (_DWORD *)i;
        v16 = MEMORY[0x181EAA840](a1: v17, a2, a3: 34084944, a4, a5: 2);
        i = (__int64)v27;
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v17;
        *(_QWORD *)v16 = 34084944;
        *(_DWORD *)(v16 + 8) = 2;
        *(_DWORD *)(v16 + 12) = 0;
        *(_QWORD *)(v16 + 16) = 0;
      }
      v27 = (_DWORD *)v16;
      *(_DWORD *)(v16 + 16) = (unsigned __int64)(i - v7) >> 3;
      *(_DWORD *)(v16 + 12) = 7533399;
      v26 = MEMORY[0x1827768E0](a1: v16, a2, a3: 1, a4: v16, a5: v7, a6: v7 + 56620232);
      v20 = *(_QWORD *)(v8 + 40);
      if ( (unsigned __int64)(v20 + 40) > *(_QWORD *)(v8 + 32) )
      {
        v20 = MEMORY[0x181EAA920](a1: v18, a2: v19, a3: 34081944);
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v20 + 40;
        *(_DWORD *)v20 = 34081944;
        *(_DWORD *)(v20 + 4) = 0;
        *(_QWORD *)(v20 + 8) = 0;
        *(_QWORD *)(v20 + 16) = 0;
        *(_QWORD *)(v20 + 24) = 0;
        *(_QWORD *)(v20 + 32) = 0;
      }
      *(_DWORD *)(v20 + 20) = 46923644;
      *(_DWORD *)(v20 + 16) = *(_DWORD *)(v7 + 374343896);
      *(_DWORD *)(v20 + 12) = (unsigned __int64)(v20 - v7) >> 3;
      v27 = (_DWORD *)v20;
      MEMORY[0x18503B9A0](a1: v18, a2: v19, a3: v20, a4: v20, a5: 0);
      v23 = (unsigned __int64)v27;
      v27[2] = (unsigned __int64)(v26 - v7) >> 3;
      if ( (*(_DWORD *)v23 & 2) != 0 )
      {
        v24 = (v23 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v23 & 0xFFFFFFFFFFF80000LL) + ((v23 - v24) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v23 & 0xFFFFFFFFFFF80000LL) + ((v23 - v24) >> 9) + 0x38) = 0;
      }
      MEMORY[0x182769900](a1: v21, a2: v22, a3: v23, a4: v23, a5: &a7);
LABEL_25:
      i = *(_QWORD *)(v8 + 40);
      if ( (unsigned __int64)(i + 16) > *(_QWORD *)(v8 + 32) )
      {
        i = MEMORY[0x181EAA920](a1, a2, a3: 34086464);
        a3 = v28;
      }
      else
      {
        *(_QWORD *)(v8 + 40) = i + 16;
        *(_DWORD *)i = 34086464;
        *(_DWORD *)(i + 4) = 0;
        *(_QWORD *)(i + 8) = 0;
      }
    }
  }
  v12 = *(_QWORD *)(v8 + 40);
  v13 = v12 + 16;
  if ( (unsigned __int64)(v12 + 16) > *(_QWORD *)(v8 + 32) )
  {
    v12 = MEMORY[0x181EAA840](a1, a2, a3: 34089376, a4: v13, a5: 1);
    LOWORD(a3) = v28;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v13;
    *(_QWORD *)v12 = 34089376;
    *(_DWORD *)(v12 + 8) = 1;
    *(_DWORD *)(v12 + 12) = 0;
  }
  *(_WORD *)(v12 + 12) = a3;
  if ( *(int *)(v8 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v12;
}
