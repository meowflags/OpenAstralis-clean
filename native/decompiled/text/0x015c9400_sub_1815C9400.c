// sub_1815C9400
// rva 0x015c9400  size 224  section .text  group text
// window base 0x1815c9400: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815C9400(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  int v14; // ecx
  __int64 v15; // rdi
  __int64 v16; // rsi
  int v17; // r9d
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v22; // [rsp+0h] [rbp-28h] BYREF
  __int64 v23; // [rsp+18h] [rbp-10h]
  __int64 v24; // [rsp+20h] [rbp-8h]

  v24 = a3;
  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
    return sub_1815C94E0();
  }
  else
  {
    v23 = MEMORY[0x185837940](a1, a2, a3: v8 + 35855512);
    v13 = MEMORY[0x185837EE0](a1: v11, a2: v12, a3: v8 + 376314560, a4: v10, a5: v8 + 376314608);
    v18 = *(_QWORD *)(v9 + 40);
    v19 = v18 + 24;
    if ( (unsigned __int64)(v18 + 24) > *(_QWORD *)(v9 + 32) )
    {
      return sub_1815C94BA(a1: v15, a2: v16, a3: v18, a4: v14, a5: v19, a6: v17, a7, a8);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v19;
      *(_DWORD *)v18 = 35855880;
      *(_DWORD *)(v18 + 4) = 0;
      *(_QWORD *)(v18 + 8) = 0;
      *(_QWORD *)(v18 + 16) = 0;
      v20 = v23;
      *(_DWORD *)(v18 + 8) = (unsigned __int64)(v24 - v8) >> 3;
      *(_DWORD *)(v18 + 4) = (unsigned __int64)(v20 - v8) >> 3;
      v23 = v18;
      MEMORY[0x1894C25E0](a1: v15, a2: v16, a3: v18, a4: v18, a5: v13);
      if ( *(int *)(v9 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return v23;
    }
  }
}
