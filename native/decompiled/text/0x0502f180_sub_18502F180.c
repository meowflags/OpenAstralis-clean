// sub_18502F180
// rva 0x0502f180  size 561  section .text  group text
// window base 0x18502f180: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18502F180(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r9
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // [rsp+0h] [rbp-28h] BYREF
  __int64 v29; // [rsp+10h] [rbp-18h]
  int v30; // [rsp+1Ch] [rbp-Ch]
  unsigned int v31; // [rsp+20h] [rbp-8h]
  unsigned __int32 v32; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v28 <= *(_QWORD *)(v8 + 8) )
  {
    v9 = MEMORY[0x181EB84E0]();
LABEL_14:
    v31 = v9;
    v23 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v23 + 40) > *(_QWORD *)(v8 + 32) )
    {
      v23 = MEMORY[0x181EAA920](a1: v11, a2: v12, a3: 34082880);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v23 + 40;
      *(_DWORD *)v23 = 34082880;
      *(_DWORD *)(v23 + 4) = 0;
      *(_QWORD *)(v23 + 8) = 0;
      *(_QWORD *)(v23 + 16) = 0;
      *(_QWORD *)(v23 + 24) = 0;
      *(_QWORD *)(v23 + 32) = 0;
    }
    *(_DWORD *)(v23 + 20) = 46923644;
    *(_DWORD *)(v23 + 16) = *(_DWORD *)(v7 + 374343896);
    *(_DWORD *)(v23 + 12) = (unsigned __int64)(v23 - v7) >> 3;
    v29 = v23;
    sub_18503B9A0(a1: v11, a2: v12, a3: v23, a4: v10, a5: 0);
    v27 = v29;
    *(_DWORD *)(v29 + 8) = 46004603;
    if ( (*(_DWORD *)v27 & 2) != 0 )
      goto LABEL_18;
    while ( 1 )
    {
      v27 = MEMORY[0x182769900](a1: v25, a2: v26, a3: v27, a4: v24, a5: &a7);
LABEL_18:
      v24 = (v27 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v27 & 0xFFFFFFFFFFF80000LL) + ((v27 - v24) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v27 & 0xFFFFFFFFFFF80000LL) + ((v27 - v24) >> 9) + 0x38) = 0;
    }
  }
  v32 = __sync_add_and_fetch((volatile signed __int32 *)(v7 + 377212668), 1);
  v9 = MEMORY[0x1850130C0](a1, a2, a3: 7, a4, a5: v32);
  if ( (v9 & 0x80000000) != 0 )
    goto LABEL_14;
  v13 = *(_QWORD *)(v8 + 40);
  v14 = (v9 + 19LL) & 0x1FFFFFFF8LL;
  if ( v14 >= 0x20000 || (v15 = v13 + v14) > *(_QWORD *)(v8 + 32) )
  {
    v31 = v9;
    v13 = MEMORY[0x181EAA840](a1: 34082368, a2: v12, a3: 34082368, a4: v10, a5: v9);
    v9 = v31;
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v15;
    *(_QWORD *)v13 = 34082368;
    *(_DWORD *)(v13 + 8) = v9;
  }
  v29 = v13;
  v31 = v9;
  MEMORY[0x181EB4960](a1: v9, a2: 0, a3: v7 + 376351544, a4: v13, a5: 0, a6: v13);
  v17 = MEMORY[0x185011920](a1: v32, a2: v7 + 60267816, a3: v31, a4: v16, a5: 0, a6: v29);
  v20 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v20 + 24) > *(_QWORD *)(v8 + 32) )
  {
    v30 = v17;
    v21 = MEMORY[0x181EAA920](a1: v18, a2: v19, a3: 34082680);
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v20 + 24;
    *(_DWORD *)v20 = 34082680;
    *(_DWORD *)(v20 + 4) = 0;
    *(_QWORD *)(v20 + 8) = 0;
    *(_QWORD *)(v20 + 16) = 0;
    v21 = v20;
  }
  *(_DWORD *)(v21 + 4) = (unsigned __int64)(v29 - v7) >> 3;
  if ( *(int *)(v8 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v21;
}
