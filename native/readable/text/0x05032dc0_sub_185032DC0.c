// sub_5032DC0
// rva 0x05032dc0  size 560  section .text  group text
// window base 0x185032dc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5032DC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned __int64 v16; // rbp
  __int64 v17; // [rsp+0h] [rbp-28h] BYREF
  __int64 v18; // [rsp+8h] [rbp-20h]
  __int64 v19; // [rsp+10h] [rbp-18h]
  __int64 v20; // [rsp+18h] [rbp-10h]
  signed __int64 v21; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v4 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v20 = a3;
  result = v3 + 8LL * *(unsigned int *)(a3 + 4);
  if ( *(_BYTE *)(a3 + 24) != 0 )
  {
    v6 = *(_QWORD *)(v4 + 40);
    if ( (unsigned __int64)(v6 + 24) > *(_QWORD *)(v4 + 32) )
    {
      v19 = v3 + 8LL * *(unsigned int *)(a3 + 4);
      v6 = sub_1EAA920(a1, a2, a3: 34085680);
      result = v19;
    }
    else
    {
      *(_QWORD *)(v4 + 40) = v6 + 24;
      *(_DWORD *)v6 = 34085680;
      *(_DWORD *)(v6 + 4) = 0;
      *(_QWORD *)(v6 + 8) = 0;
      *(_QWORD *)(v6 + 16) = 0;
    }
    v18 = v6;
    v7 = *(_QWORD *)(v4 + 40);
    if ( (unsigned __int64)(v7 + 32) > *(_QWORD *)(v4 + 32) )
    {
      v19 = result;
      v7 = sub_1EAA840(a1, a2, a3: 34082368, a4: v7, a5: 16);
      v6 = v18;
      result = v19;
    }
    else
    {
      *(_QWORD *)(v4 + 40) = v7 + 32;
      *(_QWORD *)v7 = 34082368;
      *(_DWORD *)(v7 + 8) = 16;
      *(_DWORD *)(v7 + 12) = 0;
      *(_QWORD *)(v7 + 16) = 0;
      *(_QWORD *)(v7 + 24) = 0;
    }
    *(_DWORD *)(v6 + 4) = (unsigned __int64)(v7 - v3) >> 3;
    v8 = *(unsigned int *)v6;
    if ( (v8 & 2) != 0 )
    {
      v16 = (v6 & 0xFFFFFFFFFFF80000LL) + 2112;
      v8 = (v6 - v16) >> 9;
      if ( *(_BYTE *)((v6 & 0xFFFFFFFFFFF80000LL) + v8 + 0x38) != 0 )
        *(_BYTE *)((v6 & 0xFFFFFFFFFFF80000LL) + ((v6 - v16) >> 9) + 0x38) = 0;
    }
    v19 = result;
    sub_4F36F80(a1, a2, a3: v6, a4: v8, a5: result);
    v21 = __sync_fetch_and_add((volatile signed __int64 *)(v20 + 16), 1u);
    sub_4F371C0(a1: v9, a2: v10, a3: v18, a4: v21, a5: v21);
    v13 = v18;
    if ( *(_DWORD *)(v18 + 8) != 0 )
    {
      v14 = *(_QWORD *)(v4 + 40);
      if ( (unsigned __int64)(v14 + 24) > *(_QWORD *)(v4 + 32) )
      {
        v14 = sub_1EAA920(a1: v11, a2: v12, a3: 34082680);
        v13 = v18;
      }
      else
      {
        *(_QWORD *)(v4 + 40) = v14 + 24;
        *(_DWORD *)v14 = 34082680;
        *(_DWORD *)(v14 + 4) = 0;
        *(_QWORD *)(v14 + 8) = 0;
        *(_QWORD *)(v14 + 16) = 0;
      }
      v19 = v14;
      sub_4FE9280(a1: v11, a2: v12, a3: v14, a4: v13, a5: v13, a6: v3);
      v15 = v19;
    }
    else
    {
      v15 = v3 + 373281248;
    }
    if ( *(int *)(v4 + 16) <= 0 )
      sub_277F280(a1: v11, a2: v12, a3: v15);
    return v15;
  }
  else if ( *(int *)(v4 + 16) <= 0 )
  {
    v19 = v3 + 8LL * *(unsigned int *)(a3 + 4);
    sub_277F280();
    return v19;
  }
  return result;
}
