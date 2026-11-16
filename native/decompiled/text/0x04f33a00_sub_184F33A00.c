// sub_184F33A00
// rva 0x04f33a00  size 838  section .text  group text
// window base 0x184f33a00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F33A00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // [rsp+0h] [rbp-28h] BYREF
  __int64 v31; // [rsp+8h] [rbp-20h]
  __int64 v32; // [rsp+10h] [rbp-18h]
  __int64 v33; // [rsp+18h] [rbp-10h]
  __int64 v34; // [rsp+20h] [rbp-8h]

  v34 = a3;
  if ( (unsigned __int64)&v30 <= *(_QWORD *)(v5 + 8) )
  {
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v4 )
  {
    if ( (unsigned int)MEMORY[0x184FFC820](a1, a2, a3, a4, a5: v4 + 365351040, a6: 0) == 0 )
    {
      v23 = v34;
      goto LABEL_15;
    }
    if ( (unsigned int)MEMORY[0x184FFC820](a1: v7, a2: v8, a3: v34, a4: v6, a5: v4 + 366468168, a6: 4) != 0 )
    {
      v11 = *(_QWORD *)(v5 + 40);
      if ( (unsigned __int64)(v11 + 24) > *(_QWORD *)(v5 + 32) )
      {
        v11 = MEMORY[0x181EAA920](a1: v9, a2: v10, a3: 34085680);
      }
      else
      {
        *(_QWORD *)(v5 + 40) = v11 + 24;
        *(_DWORD *)v11 = 34085680;
        *(_DWORD *)(v11 + 4) = 0;
        *(_QWORD *)(v11 + 8) = 0;
        *(_QWORD *)(v11 + 16) = 0;
      }
      v33 = v11;
      v12 = *(_QWORD *)(v5 + 40);
      if ( (unsigned __int64)(v12 + 32) > *(_QWORD *)(v5 + 32) )
      {
        v12 = MEMORY[0x181EAA840](a1: v9, a2: v10, a3: 34082368, a4: v11, a5: 16);
        v11 = v33;
      }
      else
      {
        *(_QWORD *)(v5 + 40) = v12 + 32;
        *(_QWORD *)v12 = 34082368;
        *(_DWORD *)(v12 + 8) = 16;
        *(_DWORD *)(v12 + 12) = 0;
        *(_QWORD *)(v12 + 16) = 0;
        *(_QWORD *)(v12 + 24) = 0;
      }
      *(_DWORD *)(v11 + 4) = (unsigned __int64)(v12 - v4) >> 3;
      if ( (*(_DWORD *)v11 & 2) != 0 )
      {
        v29 = (v11 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - v29) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - v29) >> 9) + 0x38) = 0;
      }
      sub_184F36F80(a1: v9, a2: v10, a3: v11, a4: v11, a5: v4 + 365351120);
      v15 = v34;
      v16 = *(unsigned int *)(v34 + 4);
      if ( (_DWORD)v16 != 0 )
      {
        v32 = MEMORY[0x184FFD140](
                a1: v13,
                a2: v14,
                a3: v34,
                a4: v34,
                a5: 8,
                a6: (unsigned int)(*(_DWORD *)(v4 + 8 * v16 + 8) >> *(_BYTE *)(v34 + 12)));
        v20 = sub_184F36F80(a1: v18, a2: v19, a3: v33, a4: v17, a5: v32);
        v21 = v33;
        if ( *(_DWORD *)(v33 + 8) != 0 )
        {
          v22 = *(_QWORD *)(v5 + 40);
          if ( (unsigned __int64)(v22 + 24) > *(_QWORD *)(v5 + 32) )
          {
            v31 = v20;
            v22 = MEMORY[0x181EAA920](a1: v7, a2: v8, a3: 34082680);
            v21 = v33;
          }
          else
          {
            *(_QWORD *)(v5 + 40) = v22 + 24;
            *(_DWORD *)v22 = 34082680;
            *(_DWORD *)(v22 + 4) = 0;
            *(_QWORD *)(v22 + 8) = 0;
            *(_QWORD *)(v22 + 16) = 0;
          }
          v31 = v22;
          MEMORY[0x184FE9280](a1: v7, a2: v8, a3: v22, a4: v21, a5: v21, a6: v4);
          v23 = v31;
        }
        else
        {
          v23 = v4 + 373281248;
        }
        goto LABEL_15;
      }
      goto LABEL_40;
    }
    v25 = *(unsigned int *)(v34 + 4);
    if ( (_DWORD)v25 == 0 )
    {
LABEL_39:
      MEMORY[0x182771080]();
LABEL_40:
      MEMORY[0x182771080](a1: v13, a2: v14, a3: v15, a4: v33);
      goto LABEL_41;
    }
    v26 = MEMORY[0x184FFD140](
            a1: v9,
            a2: v10,
            a3: v34,
            a4: (unsigned int)*(char *)(v34 + 12),
            a5: 4,
            a6: (unsigned int)(*(_DWORD *)(v4 + 8 * v25 + 8) >> *(_BYTE *)(v34 + 12)));
    if ( v26 == v4 )
    {
LABEL_41:
      MEMORY[0x182771080]();
      goto LABEL_42;
    }
    if ( v4 + 366468776 == v26 )
    {
      v23 = v4 + 365351120;
    }
    else if ( *(_BYTE *)(v26 + 12) != 0 )
    {
      v23 = v26;
    }
    else
    {
      v28 = *(unsigned int *)(v26 + 4);
      if ( (_DWORD)v28 == 0 )
      {
LABEL_42:
        MEMORY[0x182771080]();
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
        return sub_184F33D60();
      }
      if ( *(_DWORD *)(v4 + 8 * v28 + 8) == 3 )
      {
        v33 = v26;
        if ( (unsigned int)MEMORY[0x18282F960](a1: 12, a2: 3, a3: v4 + 377133336, a4: v27, a5: 12, a6: v4 + 8 * v28) != 0 )
          v23 = v4 + 365351120;
        else
          v23 = v33;
      }
      else
      {
        v23 = v26;
      }
    }
LABEL_15:
    if ( *(int *)(v5 + 16) <= 0 )
      MEMORY[0x18277F280](a1: v7, a2: v8, a3: v23);
    return v23;
  }
  MEMORY[0x182771080]();
  goto LABEL_39;
}
