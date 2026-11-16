// sub_182785860
// rva 0x02785860  size 450  section .text  group text
// window base 0x182785860: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182785860(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 (__fastcall *v4)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rax
  __int64 v5; // rdi
  __int64 v6; // rsi
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  _BYTE v17[528]; // [rsp+40h] [rbp-258h] BYREF
  _QWORD v18[2]; // [rsp+250h] [rbp-48h] BYREF
  __int64 v19; // [rsp+260h] [rbp-38h]
  __int64 v20; // [rsp+268h] [rbp-30h]
  int v21; // [rsp+274h] [rbp-24h]
  _BYTE *v22; // [rsp+278h] [rbp-20h]
  __int64 (__fastcall *v23)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+280h] [rbp-18h]
  __int64 v24; // [rsp+288h] [rbp-10h]
  _QWORD *v25; // [rsp+290h] [rbp-8h]

  v25 = v18;
  v18[0] = 0;
  v24 = MEMORY[0x10E44058](a1, a2, a3: v18, a4: 0);
  v4 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))MEMORY[0x10E449C8](
                                                                         a1: v2,
                                                                         a2: v3,
                                                                         a3: 283398512,
                                                                         a4: v24);
  v23 = v4;
  if ( v4 != nullptr
    && (result = v4(a1: v5, a2: v6, a3: MEMORY[0x10E44438] - MEMORY[0x10E44830], a4: MEMORY[0x10E44830], a5: v25)) != 0 )
  {
    MEMORY[0x10E442C0] = *v25;
  }
  else
  {
    v22 = v17;
    v7 = MEMORY[0x10E449D8](a1: v5, a2: v6, a3: v17, a4: MEMORY[0x10E45090], a5: 260);
    if ( v7 == 0 )
      return 0;
    v21 = v7;
    if ( v7 == 260 )
    {
      return 0;
    }
    else
    {
      v11 = MEMORY[0x10E44D18](a1: v8, a2: v9, a3: 0x80000000LL, a4: v22, a5: 5, a6: 0);
      if ( v11 == -1 )
      {
        return 0;
      }
      else
      {
        v20 = v11;
        v19 = MEMORY[0x10E44C70](a1: v12, a2: v13, a3: 0, a4: v11, a5: 2, a6: 0);
        MEMORY[0x10E44F48](a1: v15, a2: v16, a3: v14, a4: v20);
        return v19;
      }
    }
  }
  return result;
}
