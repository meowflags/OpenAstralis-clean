// sub_132B5824
// rva 0x132b5824  size 302  section .text  group text
// window base 0x1932b5824: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132B5824(_DWORD a1, _DWORD a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // [rsp+0h] [rbp-7F8h] BYREF
  _BYTE *v19; // [rsp+20h] [rbp-7D8h]
  _BYTE *v20; // [rsp+28h] [rbp-7D0h]
  __int64 v21; // [rsp+30h] [rbp-7C8h]
  __int64 v22; // [rsp+38h] [rbp-7C0h]
  _BYTE v23[720]; // [rsp+40h] [rbp-7B8h] BYREF
  _BYTE v24[720]; // [rsp+310h] [rbp-4E8h] BYREF
  _BYTE v25[512]; // [rsp+5E0h] [rbp-218h] BYREF
  __int64 v26; // [rsp+7E0h] [rbp-18h]

  v3 = __imp_KERNEL32.dll!GetLastError(a1: a3);
  if ( sub_132B545C(a1: v4, a2: v5, a3: (__int64)v25, a4: v3) != 0 )
  {
    v20 = v25;
    LODWORD(v19) = v3;
    LODWORD(v8) = sub_1329E4C0(a1: v6, a2: v7, a3: 356, a4: (__int64)v23, a5: 544144);
  }
  else
  {
    LODWORD(v19) = v3;
    LODWORD(v8) = sub_1329E4C0(a1: v6, a2: v7, a3: 356, a4: (__int64)v23, a5: 544176);
  }
  v8 = (int)v8;
  if ( (_DWORD)v8 != 0 )
  {
    v22 = 0;
    v21 = 0;
    LODWORD(v20) = 712;
    v19 = v24;
    v8 = (int)__imp_KERNEL32.dll!WideCharToMultiByte(a1: v9, a2: v10, a3: 0, a4: 65001, a5: v23, a6: (unsigned int)v8);
  }
  v11 = 544216;
  if ( v8 != 0 )
  {
    if ( v8 <= 0x2C7 )
      JUMPOUT(0x32650F90ALL);
    v24[711] = 0;
    v11 = (__int64)v24;
  }
  JNU_ThrowIOException(a1: v9, a2: v10, a3: v11, a4: v10);
  return sub_132C8DE0(a1: v13, a2: v14, a3: v12, a4: (unsigned __int64)&v18 ^ v26, a5: v15, a6: v16);
}
