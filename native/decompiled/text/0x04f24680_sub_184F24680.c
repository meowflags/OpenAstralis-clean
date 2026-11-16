// sub_184F24680
// rva 0x04f24680  size 226  section .text  group text
// window base 0x184f24680: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F24680(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 (*v10)(void); // rax
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // [rsp+0h] [rbp-28h] BYREF
  __int64 v19; // [rsp+10h] [rbp-18h]
  _DWORD *v20; // [rsp+18h] [rbp-10h]
  int v21; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v9 + 8) )
  {
    v20 = a3;
    LODWORD(result) = MEMORY[0x181EB84E0]();
    goto LABEL_6;
  }
  v10 = (__int64 (*)(void))(v7 + *(_QWORD *)(v8 + 8LL * (*a3 >> 3) + 136));
  v20 = a3;
  result = v10();
  if ( (int)result < 0 )
  {
LABEL_6:
    v14 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v14 + 40) > *(_QWORD *)(v9 + 32) )
      goto LABEL_9;
    *(_QWORD *)(v9 + 40) = v14 + 40;
    *(_DWORD *)v14 = 34152272;
    *(_DWORD *)(v14 + 4) = 0;
    *(_QWORD *)(v14 + 8) = 0;
    *(_QWORD *)(v14 + 16) = 0;
    *(_QWORD *)(v14 + 24) = 0;
    *(_QWORD *)(v14 + 32) = 0;
    v21 = result;
    while ( 1 )
    {
      *(_DWORD *)(v14 + 20) = 46923644;
      *(_DWORD *)(v14 + 16) = *(_DWORD *)(v8 + 374343896);
      *(_DWORD *)(v14 + 12) = (unsigned __int64)(v14 - v8) >> 3;
      v19 = v14;
      MEMORY[0x18503B9A0](a1: v12, a2: v13, a3: v14, a4: v14, a5: 0);
      LODWORD(result) = MEMORY[0x182769900](a1: v16, a2: v17, a3: v19, a4: v15, a5: &a7);
LABEL_9:
      v21 = result;
      v14 = MEMORY[0x181EAA920](a1: v12, a2: v13, a3: 34152272);
    }
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
