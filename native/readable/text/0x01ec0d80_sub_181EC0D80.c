// sub_1EC0D80
// rva 0x01ec0d80  size 250  section .text  group text
// window base 0x181ec0d80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EC0D80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rbx
  __int64 v13; // rbp
  int v14; // ebx
  int v16; // edx
  int v17; // ecx
  int v18; // edi
  int v19; // esi
  int v20; // r8d
  int v21; // r9d
  char v22; // [rsp+0h] [rbp-28h] BYREF
  __int64 v23; // [rsp+8h] [rbp-20h]
  __int64 v24; // [rsp+10h] [rbp-18h]
  __int64 v25; // [rsp+18h] [rbp-10h]
  int v26; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v22);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1EC0E80(a1: v18, a2: v19, a3: v16, a4: v17, a5: v20, a6: v21, a7);
  }
  else
  {
    v9 = *(unsigned int *)(a3 + 4);
    v10 = v7 + 8 * v9;
    v25 = v10;
    if ( (_DWORD)v9 != 0 )
    {
      v11 = *(_DWORD *)(v7 + 8 * v9 + 4);
      if ( v11 == 0 )
      {
        v24 = a3;
        v11 = sub_1ED7320(a1, a2, a3: v10);
        a3 = v24;
      }
    }
    else
    {
      v11 = 0;
    }
    v12 = *(unsigned int *)(a3 + 8);
    v13 = v7 + 8 * v12;
    if ( (_DWORD)v12 != 0 )
    {
      v14 = *(_DWORD *)(v7 + 8 * v12 + 4);
      if ( v14 == 0 )
      {
        v26 = v11;
        v24 = a3;
        v23 = v13;
        v14 = sub_1ED7320(a1, a2, a3: v13);
        v11 = v26;
        a3 = v24;
      }
    }
    else
    {
      v14 = 0;
    }
    if ( *(int *)(v8 + 16) <= 0 )
    {
      v26 = v11;
      v24 = a3;
      v11 = sub_277F280();
      a3 = v24;
    }
    return (unsigned int)(*(__int16 *)(a3 + 16) + 31 * (*(_DWORD *)(a3 + 12) + 31 * (31 * v11 + v14)));
  }
}
