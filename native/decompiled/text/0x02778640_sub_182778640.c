// sub_182778640
// rva 0x02778640  size 441  section .text  group text
// window base 0x182778640: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182778640(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  char v20; // [rsp+0h] [rbp-B8h]
  _BYTE v21[112]; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+88h] [rbp-30h]
  int v24; // [rsp+94h] [rbp-24h]
  _QWORD *v25; // [rsp+98h] [rbp-20h]
  __int64 v26; // [rsp+A0h] [rbp-18h]
  __int64 v27; // [rsp+A8h] [rbp-10h]
  __int64 v28; // [rsp+B0h] [rbp-8h]

  v28 = a5;
  v27 = a6;
  if ( a3 == v6 )
  {
    sub_18276EFE0(a1, a2, a3, a4, a5, a6, a7: v20);
LABEL_16:
    MEMORY[0x1828C1C40](a1: v13, a2: v14, a3: v6 + 370861008);
    goto LABEL_17;
  }
  result = *(_QWORD *)(a3 + 24);
  v26 = result;
  if ( result == a6 )
    return result;
  v25 = v21;
  v24 = 8 * *(_DWORD *)(a3 + 8);
  v23 = v24 + a6;
  sub_182772F00(a1: v23, a2: a5, a3: (__int64)v21, a4: 0, a5: v7, a6);
  result = sub_182772760(a1: v10, a2: v11, a3: (__int64)v25, a4: v9, a5: v7);
  if ( (_DWORD)result == 0 )
    return result;
  v15 = (__int64)v25;
  v16 = v25[5];
  if ( (v16 & 2) != 0 )
    goto LABEL_16;
  if ( v25[10] != 0 )
  {
    v17 = v25[7];
    if ( v17 != -1 )
      *(_QWORD *)(v25[11] + v17) = v27 + *(_QWORD *)(v25[11] + v17) - v26;
    while ( 1 )
    {
      result = sub_182772760(a1: v13, a2: v14, a3: v15, a4: v12, a5: v7);
      if ( (_DWORD)result == 0 )
        return result;
      v15 = (__int64)v25;
      if ( (v25[5] & 2) != 0 )
        goto LABEL_18;
      if ( v25[10] == 0 )
        goto LABEL_19;
      v18 = v25[11];
      v19 = v25[7];
      if ( v19 != -1 )
      {
        v12 = v27 + *(_QWORD *)(v18 + v19) - v26;
        *(_QWORD *)(v18 + v19) = v12;
      }
    }
  }
LABEL_17:
  MEMORY[0x1828C1C40](a1: v13, a2: v14, a3: v6 + 367049616);
LABEL_18:
  MEMORY[0x1828C1C40](a1: v13, a2: v14, a3: v6 + 370861008);
LABEL_19:
  MEMORY[0x1828C1C40](a1: v13, a2: v6 + 367049616, a3: v6 + 367049616);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_182778800();
}
