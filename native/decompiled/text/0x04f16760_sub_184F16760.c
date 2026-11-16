// sub_184F16760
// rva 0x04f16760  size 550  section .text  group text
// window base 0x184f16760: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F16760(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // r8
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rdx
  unsigned __int64 v27; // rbx
  __int64 v28; // [rsp+0h] [rbp-28h] BYREF
  __int64 v29; // [rsp+8h] [rbp-20h]
  __int64 v30; // [rsp+10h] [rbp-18h]
  __int64 v31; // [rsp+18h] [rbp-10h]
  __int64 v32; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v28 <= *(_QWORD *)(v4 + 8) )
  {
    MEMORY[0x181EB84E0]();
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
    return sub_184F169A0();
  }
  else
  {
    v5 = *(_QWORD *)(v4 + 40);
    if ( (unsigned __int64)(v5 + 24) > *(_QWORD *)(v4 + 32) )
    {
      v31 = a3;
      v5 = MEMORY[0x181EAA920](a1, a2, a3: 34085680);
      a3 = v31;
    }
    else
    {
      *(_QWORD *)(v4 + 40) = v5 + 24;
      *(_DWORD *)v5 = 34085680;
      *(_DWORD *)(v5 + 4) = 0;
      *(_QWORD *)(v5 + 8) = 0;
      *(_QWORD *)(v5 + 16) = 0;
    }
    v30 = v5;
    v6 = *(_QWORD *)(v4 + 40);
    v7 = v6 + 32;
    if ( (unsigned __int64)(v6 + 32) > *(_QWORD *)(v4 + 32) )
    {
      v31 = a3;
      v6 = MEMORY[0x181EAA840](a1, a2, a3: 34082368, a4: v7, a5: 16);
      v5 = v30;
      a3 = v31;
    }
    else
    {
      *(_QWORD *)(v4 + 40) = v7;
      *(_QWORD *)v6 = 34082368;
      *(_DWORD *)(v6 + 8) = 16;
      *(_DWORD *)(v6 + 12) = 0;
      *(_QWORD *)(v6 + 16) = 0;
      *(_QWORD *)(v6 + 24) = 0;
    }
    *(_DWORD *)(v5 + 4) = (unsigned __int64)(v6 - v3) >> 3;
    if ( (*(_DWORD *)v5 & 2) != 0 )
    {
      v7 = v5 & 0xFFFFFFFFFFF80000LL;
      v27 = (v5 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v5 & 0xFFFFFFFFFFF80000LL) + ((v5 - v27) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v5 & 0xFFFFFFFFFFF80000LL) + ((v5 - v27) >> 9) + 0x38) = 0;
    }
    v8 = v3 + 8LL * *(unsigned int *)(a3 + 8);
    v31 = a3;
    v29 = v8;
    sub_184F36F80(a1, a2, a3: v5, a4: v7, a5: v8);
    sub_184F36F80(a1: v10, a2: v11, a3: v30, a4: v9, a5: v3 + 372435352);
    v32 = MEMORY[0x184F10400](a1: v12, a2: v13, a3: v31);
    sub_184F371C0(a1: v15, a2: v16, a3: v30, a4: v14, a5: v32);
    v20 = sub_184F36F80(a1: v18, a2: v19, a3: v30, a4: v17, a5: v3 + 369248232);
    v23 = v30;
    if ( *(_DWORD *)(v30 + 8) != 0 )
    {
      v24 = *(_QWORD *)(v4 + 40);
      if ( (unsigned __int64)(v24 + 24) > *(_QWORD *)(v4 + 32) )
      {
        v29 = v20;
        v24 = MEMORY[0x181EAA920](a1: v21, a2: v22, a3: 34082680);
        v23 = v30;
      }
      else
      {
        *(_QWORD *)(v4 + 40) = v24 + 24;
        *(_DWORD *)v24 = 34082680;
        *(_DWORD *)(v24 + 4) = 0;
        *(_QWORD *)(v24 + 8) = 0;
        *(_QWORD *)(v24 + 16) = 0;
      }
      v29 = v24;
      MEMORY[0x184FE9280](a1: v21, a2: v22, a3: v24, a4: v23, a5: v23, a6: v3);
      v25 = v29;
    }
    else
    {
      v25 = v3 + 373281248;
    }
    if ( *(int *)(v4 + 16) <= 0 )
      MEMORY[0x18277F280](a1: v21, a2: v22, a3: v25);
    return v25;
  }
}
