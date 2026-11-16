// sub_184F3FC40
// rva 0x04f3fc40  size 688  section .text  group text
// window base 0x184f3fc40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F3FC40(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  __int64 result; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rbp
  _QWORD v21[2]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v22; // [rsp+10h] [rbp-18h]
  _DWORD *v23; // [rsp+18h] [rbp-10h]
  int v24; // [rsp+20h] [rbp-8h]
  int v25; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)v21 <= *(_QWORD *)(v7 + 8) )
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
    return sub_184F3FF00();
  }
  else
  {
    v23 = (_DWORD *)a3;
    if ( a5 < 256 )
    {
      v16 = *(_QWORD *)(v7 + 40);
      if ( (unsigned __int64)(v16 + 16) > *(_QWORD *)(v7 + 32) )
      {
        v25 = a5;
        v16 = MEMORY[0x181EAA840](a1, a2, a3: 34082368, a4: v16, a5: 1);
        a5 = v25;
        a3 = (unsigned __int64)v23;
      }
      else
      {
        *(_QWORD *)(v7 + 40) = v16 + 16;
        *(_QWORD *)v16 = 34082368;
        *(_DWORD *)(v16 + 8) = 1;
        *(_DWORD *)(v16 + 12) = 0;
      }
      *(_BYTE *)(v16 + 12) = a5;
      v22 = v16;
      v24 = 0;
    }
    else
    {
      v8 = *(_QWORD *)(v7 + 40);
      if ( (unsigned __int64)(v8 + 16) > *(_QWORD *)(v7 + 32) )
      {
        v25 = a5;
        v8 = MEMORY[0x181EAA840](a1, a2, a3: 34082368, a4: v8, a5: 2);
        a5 = v25;
        a3 = (unsigned __int64)v23;
      }
      else
      {
        *(_QWORD *)(v7 + 40) = v8 + 16;
        *(_QWORD *)v8 = 34082368;
        *(_DWORD *)(v8 + 8) = 2;
        *(_DWORD *)(v8 + 12) = 0;
      }
      *(_WORD *)(v8 + 12) = a5;
      v22 = v8;
      v24 = 1;
    }
    *(_DWORD *)(a3 + 12) = (a3 - v6) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v17 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v17) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v17) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(v6 + 374343896);
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v19 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v19) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v19) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(a3 + 20) = 46923644;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v18 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v18) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v18) >> 9) + 0x38) = 0;
    }
    v25 = a5;
    v9 = ((__int64 (*)(void))(v5 + *(_QWORD *)(v6 + 8LL * (*(_DWORD *)a3 >> 3) + 112)))();
    v12 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v12 + 24) > *(_QWORD *)(v7 + 32) )
    {
      v21[1] = v9;
      v12 = MEMORY[0x181EAA920](a1: v10, a2: v11, a3: 34082680);
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v12 + 24;
      *(_DWORD *)v12 = 34082680;
      *(_DWORD *)(v12 + 4) = 0;
      *(_QWORD *)(v12 + 8) = 0;
      *(_QWORD *)(v12 + 16) = 0;
    }
    v13 = v22;
    v14 = (unsigned __int64)v23;
    *(_BYTE *)(v12 + 12) = v24;
    *(_DWORD *)(v12 + 4) = (unsigned __int64)(v13 - v6) >> 3;
    *(_DWORD *)(v14 + 8) = (unsigned __int64)(v12 - v6) >> 3;
    result = *(unsigned int *)v14;
    if ( (result & 2) != 0 )
    {
      v20 = (v14 & 0xFFFFFFFFFFF80000LL) + 2112;
      result = (v14 - v20) >> 9;
      if ( *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
        *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v20) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
