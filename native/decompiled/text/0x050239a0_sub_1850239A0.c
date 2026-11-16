// sub_1850239A0
// rva 0x050239a0  size 245  section .text  group text
// window base 0x1850239a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1850239A0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rsi
  int v8; // eax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  _BOOL8 v12; // rdx
  __int64 v14; // rcx
  int v15; // [rsp+0h] [rbp-28h] BYREF
  __int64 v16; // [rsp+8h] [rbp-20h]
  __int64 v17; // [rsp+10h] [rbp-18h]
  int v18; // [rsp+18h] [rbp-10h]
  BOOL v19; // [rsp+1Ch] [rbp-Ch]
  int v20; // [rsp+20h] [rbp-8h]
  signed int v21; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v4 + 8) )
  {
    v17 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( a3 != v3 )
  {
    v21 = *(_DWORD *)(a3 + 8) >> 1;
    v17 = a3;
    v5 = sub_1850209A0(a1, a2, a3, a4: a3);
    if ( v5 != v21 )
    {
      v20 = v5;
      v8 = sub_185021340(a1: v6, a2: v7, a3: v17);
      v11 = (unsigned int)v21;
      v12 = v21 > v8;
      if ( v20 >= 1 )
        JUMPOUT(0x30A03E9FELL);
      v19 = v21 > v8;
      v18 = v8;
      if ( v21 <= v8 )
      {
        v14 = v3;
LABEL_6:
        if ( *(int *)(v4 + 16) <= 0 )
          MEMORY[0x18277F280](a1: v9, a2: v10, a3: v12, a4: v14);
        return v14;
      }
LABEL_16:
      v14 = sub_185021B40(
              a1: v9,
              a2: v10,
              a3: v17,
              a4: v11,
              a5: (unsigned int)v20,
              a6: (unsigned int)(v18 - v20),
              a7: v15,
              a8: v16);
      goto LABEL_6;
    }
    v20 = v5;
    if ( *(int *)(v4 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v3 + 373281248;
  }
  MEMORY[0x182771080]();
  goto LABEL_16;
}
