// sub_1850342A0
// rva 0x050342a0  size 368  section .text  group text
// window base 0x1850342a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1850342A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // ebp
  __int64 v8; // rbx
  __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // r10
  __int64 v15; // [rsp+0h] [rbp-58h] BYREF
  __int64 v16; // [rsp+10h] [rbp-48h]
  int v17; // [rsp+1Ch] [rbp-3Ch]
  int v18; // [rsp+20h] [rbp-38h]
  int v19; // [rsp+24h] [rbp-34h]
  __int64 v20; // [rsp+28h] [rbp-30h]
  __int64 v21; // [rsp+30h] [rbp-28h]
  __int64 v22; // [rsp+38h] [rbp-20h]
  __int64 v23; // [rsp+40h] [rbp-18h]
  int v24; // [rsp+48h] [rbp-10h]
  int v25; // [rsp+4Ch] [rbp-Ch]
  __int64 v26; // [rsp+50h] [rbp-8h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v4 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v5 = *(_QWORD *)(a3 + 16);
  v26 = v5;
  v6 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v6 != 0 )
  {
    if ( v5 < 0 )
    {
      v7 = 0;
      v8 = 0;
    }
    else
    {
      v7 = 1;
      v8 = v5;
    }
  }
  else
  {
    v7 = 0;
    v8 = 0;
  }
  v9 = *(_QWORD *)(v4 + 40);
  v10 = *(_QWORD *)(v4 + 32);
  v11 = *(unsigned int *)(a3 + 24);
  v12 = *(_DWORD *)(a3 + 12);
  v13 = *(unsigned int *)(a3 + 8);
  v22 = v3 + 8 * v13;
  if ( v9 + 40 > v10 )
  {
    v21 = v3 + 8 * v6;
    v20 = v3 + 8 * v11;
    v19 = v13;
    v25 = v12;
    v18 = v11;
    v24 = v7;
    v23 = v8;
    v17 = v6;
    v16 = a3;
    v9 = MEMORY[0x181EAA920](a1: 43306944, a2: v9, a3: 43306944);
    LODWORD(v13) = v19;
    v12 = v25;
    LODWORD(v11) = v18;
    LOBYTE(v7) = v24;
    v8 = v23;
    LODWORD(v6) = v17;
    a3 = v16;
  }
  else
  {
    *(_QWORD *)(v4 + 40) = v9 + 40;
    *(_DWORD *)v9 = 43306944;
    *(_DWORD *)(v9 + 4) = 0;
    *(_QWORD *)(v9 + 8) = 0;
    *(_QWORD *)(v9 + 16) = 0;
    *(_QWORD *)(v9 + 24) = 0;
    *(_QWORD *)(v9 + 32) = 0;
  }
  *(_DWORD *)(v9 + 28) = v11;
  *(_BYTE *)(v9 + 24) = v7;
  *(_QWORD *)(v9 + 16) = v8;
  *(_DWORD *)(v9 + 12) = v12;
  *(_DWORD *)(v9 + 8) = v13;
  *(_DWORD *)(v9 + 4) = v6;
  if ( *(int *)(v4 + 16) <= 0 )
  {
    v16 = a3;
    MEMORY[0x18277F280](a1: v10, a2: v9, a3, a4: v26);
  }
  return v9;
}
