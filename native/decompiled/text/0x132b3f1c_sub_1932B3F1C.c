// sub_1932B3F1C
// rva 0x132b3f1c  size 277  section .text  group text
// window base 0x1932b3f1c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932B3F1C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v18; // [rsp+0h] [rbp-B8h] BYREF
  int *v19; // [rsp+20h] [rbp-98h]
  int v20; // [rsp+28h] [rbp-90h]
  char *v21; // [rsp+30h] [rbp-88h]
  __int64 v22; // [rsp+38h] [rbp-80h]
  char v23; // [rsp+40h] [rbp-78h] BYREF
  int v24; // [rsp+48h] [rbp-70h] BYREF
  _DWORD v25[14]; // [rsp+68h] [rbp-50h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-18h]

  v21 = nullptr;
  v20 = 35651584;
  LODWORD(v19) = 3;
  v4 = MEMORY[0x797B0](a1, a2, a3: 128, a4, a5: 7, a6: 0);
  v10 = v4;
  if ( v4 != -1 )
  {
    if ( (unsigned int)MEMORY[0x79690](a1: v6, a2: v7, a3: v25, a4: v4) != 0 )
    {
      if ( (v25[0] & 0x400) != 0 )
      {
        v22 = 0;
        v21 = &v23;
        v20 = 28;
        v19 = &v24;
        MEMORY[0x79650](a1: v12, a2: v13, a3: 589992, a4: v10, a5: 0, a6: 0);
      }
      MEMORY[0x797C8](a1: v12, a2: v13, a3: v11, a4: v10);
    }
    else
    {
      v14 = MEMORY[0x79758](a1: v12);
      if ( (unsigned int)MEMORY[0x797C8](a1: v14, a2: v16, a3: v15, a4: v10) != 0 )
        MEMORY[0x793D8](a1: v6, a2: v7, a3: v5, a4: (unsigned int)v6);
    }
  }
  return sub_1932C8DE0(a1: v6, a2: v7, a3: v5, a4: (unsigned __int64)&v18 ^ v26, a5: v8, a6: v9);
}
