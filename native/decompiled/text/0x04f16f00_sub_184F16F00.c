// sub_184F16F00
// rva 0x04f16f00  size 1753  section .text  group text
// window base 0x184f16f00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_184F16F00(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  _QWORD *v8; // r15
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rsi
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  __int64 v26; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v27; // [rsp+10h] [rbp-28h]
  __int64 v28; // [rsp+18h] [rbp-20h]
  __int64 v29; // [rsp+20h] [rbp-18h]
  unsigned __int64 v30; // [rsp+28h] [rbp-10h]
  int v31; // [rsp+30h] [rbp-8h]
  unsigned int v32; // [rsp+34h] [rbp-4h]

  v32 = a1;
  if ( (unsigned __int64)&v26 <= v8[1] )
  {
    v29 = a6;
    v28 = a5;
    MEMORY[0x181EB84E0]();
  }
  else
  {
    v30 = a3;
    if ( a5 != v7 )
    {
      *(_DWORD *)(a3 + 4) = (unsigned __int64)(a5 - v7) >> 3;
      if ( (*(_DWORD *)a3 & 2) != 0 )
      {
        v18 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v18) >> 9) + 0x38) != 0 )
          *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v18) >> 9) + 0x38) = 0;
      }
      if ( a6 == v7 )
        goto LABEL_17;
      v28 = a5;
      v29 = a6;
      v9 = MEMORY[0x181F252C0](a1, a2, a3: a6);
      v12 = v30;
      *(_DWORD *)(v30 + 8) = (unsigned __int64)(v9 - v7) >> 3;
      if ( (*(_DWORD *)v12 & 2) != 0 )
      {
        v10 = (v12 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + ((v12 - v10) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + ((v12 - v10) >> 9) + 0x38) = 0;
      }
      v13 = v32;
      *(_BYTE *)(v12 + 28) = MEMORY[0xEA6E100] & v32;
      *(_DWORD *)(v12 + 20) = 0;
      v14 = MEMORY[0x184FEBC20](a1: v13, a2: v11, a3: v29, a4: v10, a5: 0);
      if ( (unsigned int)v14 <= 0x5B )
        __asm { jmp     rdx; switch jump }
      while ( 1 )
      {
        v24 = v8[5];
        if ( (unsigned __int64)(v24 + 40) > v8[4] )
        {
          v31 = v14;
          v24 = MEMORY[0x181EAA920](a1: v16, a2: v17, a3: 34081944);
        }
        else
        {
          v8[5] = v24 + 40;
          *(_DWORD *)v24 = 34081944;
          *(_DWORD *)(v24 + 4) = 0;
          *(_QWORD *)(v24 + 8) = 0;
          *(_QWORD *)(v24 + 16) = 0;
          *(_QWORD *)(v24 + 24) = 0;
          *(_QWORD *)(v24 + 32) = 0;
        }
        *(_DWORD *)(v24 + 20) = 46923644;
        *(_DWORD *)(v24 + 16) = *(_DWORD *)(v7 + 374343896);
        *(_DWORD *)(v24 + 12) = (unsigned __int64)(v24 - v7) >> 3;
        v27 = (_DWORD *)v24;
        MEMORY[0x18503B9A0](a1: v16, a2: v17, a3: v24, a4: v15, a5: 0);
        v25 = (unsigned __int64)v27;
        v27[2] = 45116225;
        if ( (*(_DWORD *)v25 & 2) != 0 )
        {
          v20 = (v25 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v25 & 0xFFFFFFFFFFF80000LL) + ((v25 - v20) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v25 & 0xFFFFFFFFFFF80000LL) + ((v25 - v20) >> 9) + 0x38) = 0;
          v23 = v25;
        }
        else
        {
          v23 = v25;
        }
LABEL_16:
        MEMORY[0x182769900](a1: v21, a2: v22, a3: v23, a4: v20, a5: &a7);
LABEL_17:
        v28 = a5;
        LODWORD(v14) = MEMORY[0x182771080]();
      }
    }
  }
  v29 = a6;
  v28 = a5;
  v19 = v8[5];
  if ( (unsigned __int64)(v19 + 48) > v8[4] )
  {
    v19 = MEMORY[0x181EAA920](a1, a2, a3: 34101256);
  }
  else
  {
    v8[5] = v19 + 48;
    *(_DWORD *)v19 = 34101256;
    *(_DWORD *)(v19 + 4) = 0;
    *(_QWORD *)(v19 + 8) = 0;
    *(_QWORD *)(v19 + 16) = 0;
    *(_QWORD *)(v19 + 24) = 0;
    *(_QWORD *)(v19 + 32) = 0;
    *(_QWORD *)(v19 + 40) = 0;
  }
  *(_DWORD *)(v19 + 20) = 46923644;
  *(_DWORD *)(v19 + 16) = *(_DWORD *)(v7 + 374343896);
  *(_DWORD *)(v19 + 12) = (unsigned __int64)(v19 - v7) >> 3;
  v27 = (_DWORD *)v19;
  MEMORY[0x18503B9A0](a1, a2, a3: v19, a4: v19, a5: 0);
  v23 = (unsigned __int64)v27;
  goto LABEL_16;
}
