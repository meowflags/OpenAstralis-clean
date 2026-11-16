// sub_18278A420
// rva 0x0278a420  size 375  section .text  group text
// window base 0x18278a420: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18278A420(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 (__fastcall *v6)(__int64, __int64, __int64, _QWORD, __int64, _QWORD); // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  _QWORD v18[4]; // [rsp+40h] [rbp-78h] BYREF
  _QWORD v19[3]; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v20; // [rsp+7Ch] [rbp-3Ch]
  __int64 v21; // [rsp+80h] [rbp-38h]
  __int64 v22; // [rsp+88h] [rbp-30h]
  __int64 v23; // [rsp+90h] [rbp-28h]
  __int64 v24; // [rsp+98h] [rbp-20h]
  unsigned int v25; // [rsp+A4h] [rbp-14h]
  __int64 v26; // [rsp+A8h] [rbp-10h]
  __int64 v27; // [rsp+B0h] [rbp-8h]

  v27 = a3;
  v26 = a5;
  v25 = a6;
  v24 = a2;
  v23 = 283397552;
  v6 = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64, _QWORD))MEMORY[0x10E44DB0];
  if ( MEMORY[0x10E44DB0] == 2989 )
  {
    v22 = 283398400;
    v21 = 283398384;
    v8 = MEMORY[0x10E44058](a1: 283398384, a2, a3, a4: 283398400);
    if ( v8 == 0 )
    {
      v20 = MEMORY[0x10E441F0]();
      MEMORY[0x181EB6CE0](a1: v13, a2: v14, a3: v20, a4: v12, a5: v22);
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_18278A5A0(a1: v16, a2: v17, a3: v15);
    }
    v11 = MEMORY[0x10E449C8](a1: v9, a2: v10, a3: v21, a4: v8);
    *(_QWORD *)v23 = v11;
    v6 = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64, _QWORD))v11;
  }
  if ( v6 == nullptr )
    return 0;
  v19[0] = 1;
  v19[1] = v18;
  v18[0] = 0;
  v18[1] = 0;
  v18[2] = v24;
  v23 = (__int64)v19;
  v21 = (__int64)v6;
  return v6(a1, a2: v24, a3: v27, a4: 0, a5: v26, a6: v25);
}
