// sub_184F452C0
// rva 0x04f452c0  size 709  section .text  group text
// window base 0x184f452c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F452C0(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // rsi
  unsigned __int64 v25; // rcx
  __int64 v26; // rdx
  unsigned __int64 v27; // rbx
  __int64 v28; // [rsp+0h] [rbp-28h] BYREF
  __int64 v29; // [rsp+10h] [rbp-18h]
  _DWORD *v30; // [rsp+18h] [rbp-10h]
  unsigned int v31; // [rsp+20h] [rbp-8h]
  unsigned int v32; // [rsp+24h] [rbp-4h]

  v32 = a3;
  if ( (unsigned __int64)&v28 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
LABEL_14:
    v16 = a3 + 128;
    if ( (unsigned int)v16 < 0x100 )
    {
      v17 = v7 + 8LL * *(unsigned int *)(v7 + 4 * v16 + 376353204);
      v18 = a3;
      goto LABEL_16;
    }
    goto LABEL_23;
  }
  if ( HIWORD(a3) >= 0x11u )
    goto LABEL_14;
  v9 = sub_184F47B80();
  if ( v9 != 0 )
  {
    v31 = v9;
    v12 = MEMORY[0x1857960E0](a1: v32, a2: v11, a3: v7 + 377136928, a4: v10, a5: 0, a6: 1708);
    if ( (int)v12 < 0 )
      v12 = (unsigned int)(-2 - v12);
    if ( (unsigned int)v12 >= 0x6AC )
    {
      while ( 1 )
      {
        MEMORY[0x182771220](a1: v13, a2: v14, a3: (unsigned int)v12, a4: v32, a5: 1708, a6: v31);
LABEL_23:
        v18 = a3;
        v26 = *(_QWORD *)(v8 + 40);
        if ( (unsigned __int64)(v26 + 16) > *(_QWORD *)(v8 + 32) )
        {
          v26 = MEMORY[0x181EAA920](a1, a2, a3: 34086464, a4: v18);
          v18 = v32;
        }
        else
        {
          *(_QWORD *)(v8 + 40) = v26 + 16;
          *(_DWORD *)v26 = 34086464;
          *(_DWORD *)(v26 + 4) = 0;
          *(_QWORD *)(v26 + 8) = 0;
        }
        *(_DWORD *)(v26 + 4) = v18;
        v17 = v26;
LABEL_16:
        v19 = *(_QWORD *)(v8 + 40);
        if ( (unsigned __int64)(v19 + 24) > *(_QWORD *)(v8 + 32) )
        {
          v30 = (_DWORD *)v17;
          v19 = MEMORY[0x181EAA840](a1: 34084944, a2, a3: 34084944, a4: v18, a5: 2);
          v17 = (__int64)v30;
        }
        else
        {
          *(_QWORD *)(v8 + 40) = v19 + 24;
          *(_QWORD *)v19 = 34084944;
          *(_DWORD *)(v19 + 8) = 2;
          *(_DWORD *)(v19 + 12) = 0;
          *(_QWORD *)(v19 + 16) = 0;
        }
        v30 = (_DWORD *)v19;
        *(_DWORD *)(v19 + 16) = (unsigned __int64)(v17 - v7) >> 3;
        *(_DWORD *)(v19 + 12) = 7533399;
        v29 = MEMORY[0x1827768E0](a1: v19, a2, a3: 1, a4: v19, a5: v7, a6: v7 + 56620232);
        v22 = *(_QWORD *)(v8 + 40);
        if ( (unsigned __int64)(v22 + 40) > *(_QWORD *)(v8 + 32) )
        {
          v22 = MEMORY[0x181EAA920](a1: v20, a2: v21, a3: 34081944);
        }
        else
        {
          *(_QWORD *)(v8 + 40) = v22 + 40;
          *(_DWORD *)v22 = 34081944;
          *(_DWORD *)(v22 + 4) = 0;
          *(_QWORD *)(v22 + 8) = 0;
          *(_QWORD *)(v22 + 16) = 0;
          *(_QWORD *)(v22 + 24) = 0;
          *(_QWORD *)(v22 + 32) = 0;
        }
        *(_DWORD *)(v22 + 20) = 46923644;
        *(_DWORD *)(v22 + 16) = *(_DWORD *)(v7 + 374343896);
        *(_DWORD *)(v22 + 12) = (unsigned __int64)(v22 - v7) >> 3;
        v30 = (_DWORD *)v22;
        MEMORY[0x18503B9A0](a1: v20, a2: v21, a3: v22, a4: v22, a5: 0);
        v25 = (unsigned __int64)v30;
        v30[2] = (unsigned __int64)(v29 - v7) >> 3;
        if ( (*(_DWORD *)v25 & 2) != 0 )
        {
          v27 = (v25 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v25 & 0xFFFFFFFFFFF80000LL) + ((v25 - v27) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v25 & 0xFFFFFFFFFFF80000LL) + ((v25 - v27) >> 9) + 0x38) = 0;
        }
        LODWORD(v12) = MEMORY[0x182769900](a1: v23, a2: v24, a3: v25, a4: v25, a5: &a7);
      }
    }
    if ( *(int *)(v8 + 16) <= 0 )
      v12 = MEMORY[0x18277F280]();
    return v7 + 8LL * *(unsigned int *)(v7 + 4 * v12 + 377143788);
  }
  else
  {
    if ( *(int *)(v8 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v7 + 375388056;
  }
}
