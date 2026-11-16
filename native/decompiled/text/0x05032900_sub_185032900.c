// sub_185032900
// rva 0x05032900  size 569  section .text  group text
// window base 0x185032900: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185032900(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  unsigned __int64 v19; // rbp
  __int64 v20; // [rsp+0h] [rbp-28h] BYREF
  __int64 v21; // [rsp+8h] [rbp-20h]
  __int64 v22; // [rsp+10h] [rbp-18h]
  __int64 v23; // [rsp+18h] [rbp-10h]
  __int64 v24; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v4 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v23 = a3;
  v5 = *(unsigned int *)(a3 + 4);
  v6 = v3 + 8 * v5;
  if ( (_DWORD)v5 != 0 && *(__int64 *)(a3 + 16) >= 0 )
  {
    v8 = *(_QWORD *)(v4 + 40);
    if ( (unsigned __int64)(v8 + 24) > *(_QWORD *)(v4 + 32) )
    {
      v22 = v6;
      v8 = MEMORY[0x181EAA920](a1, a2, a3: 34085680);
      v6 = v22;
    }
    else
    {
      *(_QWORD *)(v4 + 40) = v8 + 24;
      *(_DWORD *)v8 = 34085680;
      *(_DWORD *)(v8 + 4) = 0;
      *(_QWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 16) = 0;
    }
    v21 = v8;
    v9 = *(_QWORD *)(v4 + 40);
    if ( (unsigned __int64)(v9 + 32) > *(_QWORD *)(v4 + 32) )
    {
      v22 = v6;
      v9 = MEMORY[0x181EAA840](a1, a2, a3: 34082368, a4: v6, a5: 16);
      v8 = v21;
      v6 = v22;
    }
    else
    {
      *(_QWORD *)(v4 + 40) = v9 + 32;
      *(_QWORD *)v9 = 34082368;
      *(_DWORD *)(v9 + 8) = 16;
      *(_DWORD *)(v9 + 12) = 0;
      *(_QWORD *)(v9 + 16) = 0;
      *(_QWORD *)(v9 + 24) = 0;
    }
    *(_DWORD *)(v8 + 4) = (unsigned __int64)(v9 - v3) >> 3;
    if ( (*(_DWORD *)v8 & 2) != 0 )
    {
      v19 = (v8 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v8 & 0xFFFFFFFFFFF80000LL) + ((v8 - v19) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v8 & 0xFFFFFFFFFFF80000LL) + ((v8 - v19) >> 9) + 0x38) = 0;
    }
    v22 = v6;
    MEMORY[0x184F36F80](a1, a2, a3: v8, a4: v6, a5: v6);
    v10 = *(_QWORD *)(v23 + 16);
    v24 = v10;
    *(_QWORD *)(v23 + 16) = v10 + 1;
    MEMORY[0x184F371C0](a1: v12, a2: v13, a3: v21, a4: v11, a5: v10);
    v16 = v21;
    if ( *(_DWORD *)(v21 + 8) != 0 )
    {
      v17 = *(_QWORD *)(v4 + 40);
      if ( (unsigned __int64)(v17 + 24) > *(_QWORD *)(v4 + 32) )
      {
        v17 = MEMORY[0x181EAA920](a1: v14, a2: v15, a3: 34082680);
        v16 = v21;
      }
      else
      {
        *(_QWORD *)(v4 + 40) = v17 + 24;
        *(_DWORD *)v17 = 34082680;
        *(_DWORD *)(v17 + 4) = 0;
        *(_QWORD *)(v17 + 8) = 0;
        *(_QWORD *)(v17 + 16) = 0;
      }
      v22 = v17;
      MEMORY[0x184FE9280](a1: v14, a2: v15, a3: v17, a4: v17, a5: v16, a6: v3);
      v18 = v22;
    }
    else
    {
      v18 = v3 + 373281248;
    }
    if ( *(int *)(v4 + 16) <= 0 )
      MEMORY[0x18277F280](a1: v14, a2: v15, a3: v18);
    return v18;
  }
  else
  {
    if ( *(int *)(v4 + 16) <= 0 )
    {
      v22 = v3 + 8 * v5;
      MEMORY[0x18277F280]();
      return v22;
    }
    return v6;
  }
}
