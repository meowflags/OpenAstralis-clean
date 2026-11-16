// initInetAddressIDs
// rva 0x132aa210  size 118  section .text  group text
// window base 0x1932aa210: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall initInetAddressIDs(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  int v11; // edi
  int v12; // esi
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rdi
  __int64 v16; // rsi

  if ( MEMORY[0x3374f4]/* 0x3374f4 */ == 0 )
  {
    Java_java_net_InetAddress_init(a1, a2, a3: 0);
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1824LL))(
           a1: v5,
           a2: v6,
           a3: *(_QWORD *)(*(_QWORD *)a4 + 1824LL),
           a4) == 0 )
    {
      Java_java_net_Inet4Address_init(a1: v7, a2: v8, a3: 0, a4);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1824LL))(
             a1: v9,
             a2: v10,
             a3: *(_QWORD *)(*(_QWORD *)a4 + 1824LL),
             a4) == 0 )
      {
        Java_java_net_Inet6Address_init(a1: v11, a2: v12, a3: 0, a4, a5: v13, a6: v14);
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)a4 + 1824LL))(
               a1: v15,
               a2: v16,
               a3: *(_QWORD *)(*(_QWORD *)a4 + 1824LL),
               a4) == 0 )
          MEMORY[0x3374f4]/* 0x3374f4 */ = 1;
      }
    }
  }
}
